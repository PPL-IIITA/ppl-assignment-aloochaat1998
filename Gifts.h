#include <bits/stdc++.h>

#ifndef GIFTS_H_
#define GIFTS_H_

class Gifts
{
    private:
        std::string name;
        int price;
        int value;
        int type;
        int uc_ld;
        int uv_lr;
        int status;
    public:
        Gifts(std::string, int, int, int, int, int);
        std::string get_name();
        int get_price();
        int get_value();
        int get_type();
        int get_uc_ld();
        int get_uv_lr();
        int get_status();
        void set_status();
};
#endif
