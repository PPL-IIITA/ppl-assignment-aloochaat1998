#ifndef GIRL_Desperate_H_
#define GIRL_Desperate_H_
#include <bits/stdc++.h>
#include "Girl.h"

class Girl_Desperate : private Girl 
{
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