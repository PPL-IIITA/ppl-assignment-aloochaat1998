#include "Gifts.h"
#include <bits/stdc++.h>

Gifts::Gifts(std::string name, int price, int value, int type, int uc_ld, int uv_lr)
{
    this->name = name;
    this->price = price;
    this->value = value;
    this->type = type;
    this->uc_ld = uc_ld;
    this->uv_lr = uv_lr;
    this->status = 0;
}

std::string Gifts::get_name()
{
    return this->name;
}

int Gifts::get_price()
{
    return this->price;
}

int Gifts::get_value()
{
    return this->value;
}

int Gifts::get_type()
{
    return this->type;
}

int Gifts::get_uc_ld()
{
    return this->uc_ld;
}

int Gifts::get_uv_lr()
{
    return this->uv_lr;
}

int Gifts::get_status()
{
    return this->status;
}

void Gifts::set_status()
{
    this->status = 1;
}
