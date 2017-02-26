#include <bits/stdc++.h>

#ifndef COUPLES_H_
#define COUPLES_H_

class Couples
{
    private:
        std::string b_name;
        std::string g_name;
        int happiness;
        int compatibility;
    public:
        Couples(std::string, std::string, int, int);
        std::string get_b_name();
        std::string get_g_name();
        int get_happiness();
        int get_compatibility();
};
#endif
