#include "give_gifts.h"
#include "Gifts.h"
#include "Couples.h"
#include <bits/stdc++.h>

bool comp(Gifts &g1, Gifts &g2)
{
    return g1.get_price() < g2.get_price();
}

void give_gifts::gifts_distribution(std::vector<Gifts> &g, std::vector<Couples> &c)
{

    //std::cout<<"hi";
    std::ifstream input;
    input.open("Gifts.csv", std::ios::in);
    while(!input.eof()) {
        std::string name;
        std::string a;
        int price;
        int value;
        int type;
        int uc_ld;
        int uv_lr;
        input >> name >> a >> price >> a >> value >> a >> type >> a >> uc_ld >> a >> uv_lr;
      //  std::cout<<name<<" "<<price<<" "<<value<<" "<<type<<" "<<uc_ld<<" "<<uv_lr<<"\n";
        Gifts g1(name,price,value,type,uc_ld,uv_lr);
        g.push_back(g1);
    }
    std::sort(g.begin(),g.end(),comp);
    input.close();
    input.open("Couples2.csv", std::ios::in);
    std::ofstream output;
    output.open("log.csv", std::ios::out);
    std::string name1;
   // std::cout<<"hi2";
    while(!input.eof()) 
    {
        std::vector<Gifts>::iterator it;
        std::string g_name, b_name, g_type, b_type, a,b;
        int g_budget, b_budget, g_intelligence, b_intelligence, g_attraction, b_attraction, b_happiness, g_happiness;
        input >> g_name >> a >> b_name >> a >> g_budget >> a >> b_budget >> a >> g_intelligence >> a >> b_intelligence >> a >> g_attraction >> a >> b_attraction >> a >> b >> g_type >> a >> b >> b_type;
        if(g_name.size()<2)
            break;
    //    std::cout<<g_name<<" "<<b_name<<" "<<g_budget<<" "<<b_budget<<" "<<g_intelligence<<" "<<b_intelligence<<" "<<g_attraction<<" "<<b_attraction<<" "<<g_type<<" "<<b_type<<"\n";
        it = g.begin();
        int s=0, gu = g_budget, lp = 0, no = 0, v = 0;
        while(gu > 0 && it != g.end()) 
        {
            s += it->get_price();
            if(it->get_type() == 2)
                lp = lp + it->get_price();
            v += (it->get_value());
            gu = gu - it->get_price();
            no++;
            output << no <<" , "<< b_name << " , " << g_name <<" , "<<it->get_name() <<"\n";
     //       std::cout << no <<" "<< b_name << " " << g_name <<" "<<it->get_name() <<"\n";
            it->set_status();
            it++;
        }
        if(g_type == "Choosy") {
            s = s + 2*lp - g_budget;
            g_happiness = log(s);
            no++;
        }
        else if(g_type == "Normal") {
            s = s + v - g_budget;
            g_happiness = s;
        }
        else
            g_happiness = pow(1.6123,(s - g_budget));

        if(b_type == "Miser")
            b_happiness = abs(b_budget - s);
        else if(b_type == "Generous")
            b_happiness = g_happiness;
        else
            b_happiness = g_intelligence;

        int happiness = b_happiness + g_happiness;
        int compatibility = abs(b_budget - g_budget) + abs(b_attraction - g_attraction) + abs(b_intelligence - g_intelligence);
        Couples c1(b_name,g_name,happiness,compatibility);
        c.push_back(c1);
    }
    input.close();
    output.close();
}
