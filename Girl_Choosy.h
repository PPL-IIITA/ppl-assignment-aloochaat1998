#ifndef GIRL_Choosy_H_
#define GIRL_Choosy_H_
#include <bits/stdc++.h>
#include "Girl.h"

class Girl_Choosy : private Girl 
{
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