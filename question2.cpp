#include "Couples.h"
#include "Gifts.h"
#include "give_gifts.h"
#include <bits/stdc++.h>

bool comp1(Couples &c1, Couples &c2)
{
	return c1.get_happiness() > c2.get_happiness();
}

bool comp2(Couples &c1, Couples &c2)
{
	return c1.get_compatibility() > c2.get_compatibility();
}

int main()
{
//    std::cout<<"hi_main1";
	std::vector<Gifts> g;
	std::vector<Couples> c;
	give_gifts gg;
//    std::cout<<"hi_main2";
	gg.gifts_distribution(g,c);
    //std::cout<<"allocation finished\n";
	std::sort(c.begin(),c.end(),comp1);
	int k;
	std::cout << "Enter value of k:\n";
	std::cin >> k;
	int temp = k;
	std::vector<Couples>::iterator it;
	it = c.begin();
	int vsize = c.size();
	if(vsize < k)
		k = vsize;
	std::cout <<k<<" MOST HAPPIEST COUPLES:\n";
	while(temp-- && it != c.end()) 
	{
		std::cout <<it->get_b_name() << " " << it->get_g_name() << " "<< it->get_happiness()<<"\n";
		it++;
	}
	std::sort(c.begin(),c.end(),comp2);
	it = c.begin();
	temp = k;
	std::cout <<"\n";
	std::cout << k <<" MOST COMPATIBLE COUPLES:\n";
	while(temp-- && it != c.end()) {
		std::cout <<it->get_b_name() << " " << it->get_g_name() <<" " << it->get_compatibility()<< "\n";
		it++;
	}
    //to print gift log file.
	std::ifstream input2;
	input2.open("log.csv", std::ios::in);
	while(!input2.eof()) 
	{
		int time;
		std::string b_name;
		std::string g_name;
		std::string gift;
		std::string a;
		input2 >> time >> a >> b_name >> a >> g_name >> a >> gift;
//		std::cout << time <<" " << b_name << " " << g_name << " " << gift << "\n";
	}
	return 0;
}
