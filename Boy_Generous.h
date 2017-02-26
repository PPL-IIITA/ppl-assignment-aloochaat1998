#ifndef Boy_Generous_H_
#define Boy_Generous_H_
#include <bits/stdc++.h>

class Boy_Generous 
{
    private:
        std::string name;
        int attraction;
        int budget;
        int intelligence;
        int req_attraction;
    public:
        Boy_Generous(std::string, int, int, int, int);
        std::string getname();
        int get_attraction();
        int get_budget();
        int get_intelligence();
        int get_req_attraction();
};
#endif