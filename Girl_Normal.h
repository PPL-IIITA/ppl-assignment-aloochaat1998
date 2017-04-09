#ifndef GIRL_NORMAL_H_
#define GIRL_NORMAL_H_
#include <bits/stdc++.h>
#include "Girl.h"

class Girl_Normal : private Girl 
{
    public:
        Girl_Normal(std::string, int, int, int, int);
        std::string getname();
        int get_attraction();
        int get_budget();
        int get_intelligence();
        int get_status();
        void set_status();
};
#endif