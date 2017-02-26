#ifndef GIRL_CHOOSY_H_
#define GIRL_CHOOSY_H_
#include <bits/stdc++.h>

class Girl_Choosy 
{
    private:
        std::string name;
        int attraction;
        int budget;
        int intelligence;
        int status;
    public:
        Girl_Choosy(std::string, int, int, int, int);
        std::string getname();
        int get_attraction();
        int get_budget();
        int get_intelligence();
        int get_status();
        void set_status();
};
#endif