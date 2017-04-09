#include "make_couples.h"
#include <bits/stdc++.h>

void make_couples::extract(std::vector<Boy_Miser> &mb, std::vector<Boy_Geeks> &gb, std::vector<Boy_Generous> &genb, std::vector<Girl_Choosy> &gc,
 std::vector<Girl_Normal> &gn, std::vector<Girl_Desperate> &gd)
{
    std::ifstream input;
    input.open("Boys.csv", std::ios::in);
    std::ofstream out;
    while(!input.eof()) {
        std::string name;
        std::string ign;
        int attraction;
        int intelligence;
        int budget;
        int req_attraction;
        int type;
        input >> name >> ign >> attraction >> ign >> intelligence >> ign >> budget >> ign >> req_attraction >> ign >> type;
  //      std::cout<<name<<" "<<attraction<<" "<<intelligence<<" "<<budget<<" "<<req_attraction<<" "<<type<<"\n";
        if(type == 1) {
            Boy_Miser m (name, attraction, budget, intelligence, req_attraction);
            mb.push_back(m);
        }
        else if (type == 3) {
            Boy_Geeks g (name, attraction,budget,intelligence, req_attraction);
            gb.push_back(g);
        }
        else {
            Boy_Generous gen (name, attraction, budget, intelligence, req_attraction);
            genb.push_back(gen);
        }
    }
    input.close();
//    std::cout<<"Boys done"<<"\n";
    input.open("Girls.csv", std::ios::in);
    while(!input.eof()) {
        std::string name;
        std::string ign;
        int attraction;
        int intelligence;
        int budget;
        int type;
        input >> name >> ign >> attraction >> ign >> intelligence >> ign >> budget >> ign >> type;
   //     std::cout<<name<<" "<<attraction<<" "<<intelligence<<" "<<budget<<" "<<type<<"\n";
        if(type == 1) {
            Girl_Choosy m (name, attraction, budget, intelligence, type);
            gc.push_back(m);
        }
        else if (type == 2) {
            Girl_Normal g (name, attraction,budget,intelligence, type);
            gn.push_back(g);
        }
        else {
            Girl_Desperate gen (name, attraction,budget, intelligence, type);
            gd.push_back(gen);
        }
    }
    input.close();
 //   std::cout<<"Girls did"<<"\n";
    input.open("Boys.csv", std::ios::in);
    std::ofstream output;
    output.open("Couples.csv", std::ios::trunc);
    out.open("Couples2.csv", std::ios::trunc);
    int x=0;
    while(!input.eof()) 
    {
        if(x!=0)
            out<<"\n";
        std::string name;
        std::string ign;
        int attraction;
        int intelligence;
        int budget;
        int req_attraction;
        int type;
        input >> name >> ign >> attraction >> ign >> intelligence >> ign >> budget >> ign >> req_attraction >> ign >> type;

        std::vector<Girl_Desperate>::iterator it1;
        std::vector<Girl_Normal>::iterator it2;
        std::vector<Girl_Choosy>::iterator it3;
        
        for(it1=gd.begin();it1!=gd.end();it1++)
            if((*it1).get_attraction()>=req_attraction && (*it1).get_budget()<=budget && (*it1).get_status()==0)
            {
                (*it1).set_status();
                std::cout<<"Girl is "<<(*it1).getname()<<" & boy is "<<name<<"\n";
                output<<name<<" , "<<(*it1).getname()<<"\n";
                out<< (*it1).getname() <<" , " << name << " , " <<(*it1).get_budget()<<" , "<<budget<<" , "<<(*it1).get_intelligence()<<" , "<<intelligence<<" , "<<(*it1).get_attraction()<<" , "<<attraction<<" , "<<"Girl Desperate , ";
                if(type==1)
                    out<<"Boy Miser";
                else if(type==2)
                    out<<"Boy Generous";
                else
                    out<<"Boy Geeky";
                x=1;
                break;
            }    
        if(it1!=gd.end())
            continue;

        for(it2=gn.begin();it2!=gn.end();it2++)
            if((*it2).get_attraction()>=req_attraction && (*it2).get_budget()<=budget && (*it2).get_status()==0)
            {
                (*it2).set_status();
                std::cout<<"Girl is "<<(*it2).getname()<<" & Boy is "<<name<<"\n";
                output<<name<<" , "<<(*it2).getname()<<"\n";
                out<< (*it2).getname() <<" , " << name << " , " <<(*it2).get_budget()<<" , "<<budget<<" , "<<(*it2).get_intelligence()<<" , "<<intelligence<<" , "<<(*it2).get_attraction()<<" , "<<attraction<<" , "<< "Girl Normal , ";
                if(type==1)
                    out<<"Boy Miser";
                else if(type==2)
                    out<<"Boy Generous";
                else
                    out<<"Boy Geeky";
                x=1;
                break;
            }    
        if(it2!=gn.end())
            continue;

        for(it3=gc.begin();it3!=gc.end();it3++)
            if((*it3).get_attraction()>=req_attraction && (*it3).get_budget()<=budget && (*it3).get_status()==0)
            {
                (*it3).set_status();
                std::cout<<"Girl is "<<(*it3).getname()<<" & boy is "<<name<<"\n";
                output<<name<<" , "<<(*it3).getname()<<"\n";
                out<< (*it3).getname() <<" , " << name << " , "<<(*it3).get_budget()<<" , "<<budget<<" , "<<(*it3).get_intelligence()<<" , "<<intelligence<<" , "<<(*it3).get_attraction()<<" , "<<attraction<<" , "<< "Girl Choosy , ";
                if(type==1)
                    out<<"Boy Miser";
                else if(type==2)
                    out<<"Boy Generous";
                else
                    out<<"Boy Geeky";
                x=1;
                break;
            }    
        if(it3!=gc.end())
            continue;
        x=0;
        std::cout<<"Couldn't find girlfriend for "<<name<<"\n";
    }
    output.close();
}
bool sortmb(Boy_Miser &b1,Boy_Miser &b2)
{
    return b1.get_budget()>b2.get_budget();
}
bool sortgc(Girl_Choosy &g1,Girl_Choosy &g2)
{
    return g1.get_attraction()>g2.get_attraction();
}

void make_couples::diff_mechanism(std::vector<Boy_Miser> &mb, std::vector<Girl_Choosy> &gc)
{
    std::ifstream input;
    input.open("Boys.csv", std::ios::in);
    std::ofstream out;
    while(!input.eof()) {
        std::string name;
        std::string ign;
        int attraction;
        int intelligence;
        int budget;
        int req_attraction;
        int type;
        input >> name >> ign >> attraction >> ign >> intelligence >> ign >> budget >> ign >> req_attraction >> ign >> type;
  //      std::cout<<name<<" "<<attraction<<" "<<intelligence<<" "<<budget<<" "<<req_attraction<<" "<<type<<"\n";
        Boy_Miser m (name, attraction, budget, intelligence, req_attraction);
        mb.push_back(m);
    }
    input.close();
//    std::cout<<"Boys done"<<"\n";
    input.open("Girls.csv", std::ios::in);
    while(!input.eof()) {
        std::string name;
        std::string ign;
        int attraction;
        int intelligence;
        int budget;
        int type;
        input >> name >> ign >> attraction >> ign >> intelligence >> ign >> budget >> ign >> type;
   //     std::cout<<name<<" "<<attraction<<" "<<intelligence<<" "<<budget<<" "<<type<<"\n";
        Girl_Choosy m (name, attraction, budget, intelligence, type);
        gc.push_back(m);
    }
    input.close();
 //   std::cout<<"Girls did"<<"\n";

    sort(mb.begin(),mb.end(),sortmb);
    sort(gc.begin(),gc.end(),sortgc);
    std::ofstream output;
    output.open("Question5.csv", std::ios::trunc);
    out.open("Question5_1.csv", std::ios::trunc);
    int x=0;
    std::vector<Boy_Miser>::iterator it=mb.begin();
    while(it!=mb.end()) 
    {
        if(x!=0)
            out<<"\n";

        std::vector<Girl_Choosy>::iterator it3;
        for(it3=gc.begin();it3!=gc.end();it3++)
            if((*it).get_budget()>=(*it3).get_budget() && (*it3).get_status()==0)
            {
                (*it3).set_status();
                std::cout<<"Girl is "<<(*it3).getname()<<" & boy is "<<(*it).getname()<<"\n";
                output<<(*it).getname()<<" , "<<(*it3).getname()<<"\n";
                out<< (*it3).getname() <<" , " << (*it).getname() << " , "<<(*it3).get_budget()<<" , "<<(*it).get_budget()<<" , "<<(*it3).get_intelligence()<<" , "<<(*it).get_intelligence()<<" , "<<(*it3).get_attraction()<<" , "<<(*it).get_attraction()<<" , ";
                x=1;
                break;
            }    
        x=0;
        if(it3==gc.end())
            std::cout<<"Couldn't find girlfriend for "<<(*it).getname()<<"\n";
        it++;
    }
    output.close();
}

void make_couples::make_new(std::vector<string> &names,std::vector<Boy_Miser> &mb, std::vector<Boy_Geeks> &gb, std::vector<Boy_Generous> &genb, std::vector<Girl_Choosy> &gc,
 std::vector<Girl_Normal> &gn, std::vector<Girl_Desperate> &gd)
{
    std::ifstream input;
    input.open("Boys.csv", std::ios::in);
    std::ofstream out;
    while(!input.eof()) {
        std::string name;
        std::string ign;
        int attraction;
        int intelligence;
        int budget;
        int req_attraction;
        int type;
        input >> name >> ign >> attraction >> ign >> intelligence >> ign >> budget >> ign >> req_attraction >> ign >> type;
  //      std::cout<<name<<" "<<attraction<<" "<<intelligence<<" "<<budget<<" "<<req_attraction<<" "<<type<<"\n";
        if(find(names.begin(),names.end(),name)!=names.end())
            continue;
        if(type == 1) {
            Boy_Miser m (name, attraction, budget, intelligence, req_attraction);
            mb.push_back(m);
        }
        else if (type == 3) {
            Boy_Geeks g (name, attraction,budget,intelligence, req_attraction);
            gb.push_back(g);
        }
        else {
            Boy_Generous gen (name, attraction, budget, intelligence, req_attraction);
            genb.push_back(gen);
        }
    }
    input.close();
//    std::cout<<"Boys done"<<"\n";
    input.open("Girls.csv", std::ios::in);
    while(!input.eof()) {
        std::string name;
        std::string ign;
        int attraction;
        int intelligence;
        int budget;
        int type;
        input >> name >> ign >> attraction >> ign >> intelligence >> ign >> budget >> ign >> type;
   //     std::cout<<name<<" "<<attraction<<" "<<intelligence<<" "<<budget<<" "<<type<<"\n";
        if(type == 1) {
            Girl_Choosy m (name, attraction, budget, intelligence, type);
            gc.push_back(m);
        }
        else if (type == 2) {
            Girl_Normal g (name, attraction,budget,intelligence, type);
            gn.push_back(g);
        }
        else {
            Girl_Desperate gen (name, attraction,budget, intelligence, type);
            gd.push_back(gen);
        }
    }
    input.close();
 //   std::cout<<"Girls did"<<"\n";
    input.open("Boys.csv", std::ios::in);
    std::ofstream output;
    output.open("Couples.csv", std::ios::trunc);
    out.open("Couples2.csv", std::ios::trunc);
    int x=0;
    while(!input.eof()) 
    {
        if(x!=0)
            out<<"\n";
        std::string name;
        std::string ign;
        int attraction;
        int intelligence;
        int budget;
        int req_attraction;
        int type;
        input >> name >> ign >> attraction >> ign >> intelligence >> ign >> budget >> ign >> req_attraction >> ign >> type;

        std::vector<Girl_Desperate>::iterator it1;
        std::vector<Girl_Normal>::iterator it2;
        std::vector<Girl_Choosy>::iterator it3;
        
        for(it1=gd.begin();it1!=gd.end();it1++)
            if((*it1).get_attraction()>=req_attraction && (*it1).get_budget()<=budget && (*it1).get_status()==0)
            {
                (*it1).set_status();
                std::cout<<"Girl is "<<(*it1).getname()<<" & boy is "<<name<<"\n";
                output<<name<<" , "<<(*it1).getname()<<"\n";
                out<< (*it1).getname() <<" , " << name << " , " <<(*it1).get_budget()<<" , "<<budget<<" , "<<(*it1).get_intelligence()<<" , "<<intelligence<<" , "<<(*it1).get_attraction()<<" , "<<attraction<<" , "<<"Girl Desperate , ";
                if(type==1)
                    out<<"Boy Miser";
                else if(type==2)
                    out<<"Boy Generous";
                else
                    out<<"Boy Geeky";
                x=1;
                break;
            } 
        if(it1!=gd.end())
            continue;

        for(it2=gn.begin();it2!=gn.end();it2++)
            if((*it2).get_attraction()>=req_attraction && (*it2).get_budget()<=budget && (*it2).get_status()==0)
            {
                (*it2).set_status();
                std::cout<<"Girl is "<<(*it2).getname()<<" & Boy is "<<name<<"\n";
                output<<name<<" , "<<(*it2).getname()<<"\n";
                out<< (*it2).getname() <<" , " << name << " , " <<(*it2).get_budget()<<" , "<<budget<<" , "<<(*it2).get_intelligence()<<" , "<<intelligence<<" , "<<(*it2).get_attraction()<<" , "<<attraction<<" , "<< "Girl Normal , ";
                if(type==1)
                    out<<"Boy Miser";
                else if(type==2)
                    out<<"Boy Generous";
                else
                    out<<"Boy Geeky";
                x=1;
                break;
            }    
        if(it2!=gn.end())
            continue;

        for(it3=gc.begin();it3!=gc.end();it3++)
            if((*it3).get_attraction()>=req_attraction && (*it3).get_budget()<=budget && (*it3).get_status()==0)
            {
                (*it3).set_status();
                std::cout<<"Girl is "<<(*it3).getname()<<" & boy is "<<name<<"\n";
                output<<name<<" , "<<(*it3).getname()<<"\n";
                out<< (*it3).getname() <<" , " << name << " , "<<(*it3).get_budget()<<" , "<<budget<<" , "<<(*it3).get_intelligence()<<" , "<<intelligence<<" , "<<(*it3).get_attraction()<<" , "<<attraction<<" , "<< "Girl Choosy , ";
                if(type==1)
                    out<<"Boy Miser";
                else if(type==2)
                    out<<"Boy Generous";
                else
                    out<<"Boy Geeky";
                x=1;
                break;
            }    
        if(it3!=gc.end())
            continue;
        x=0;
        std::cout<<"Couldn't find girlfriend for "<<name<<"\n";
    }
    output.close();
}