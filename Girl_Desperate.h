#ifndef Girl_Desperate_h_
#define Girl_Desperate_h_
#include <bits/stdc++.h>

class Girl_Desperate 
{
    private:
        std::string name;
        int attraction;
        int budget;
        int intelligence;
        int status;
    public:
        Girl_Desperate(std::string, int, int, int, int);
        std::string getname();
        int get_attraction();
        int get_budget();
        int get_intelligence();
        int get_status();
        void set_status();
};
#endif