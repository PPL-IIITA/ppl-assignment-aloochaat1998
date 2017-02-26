#include "Couples.h"

Couples::Couples(std::string b_name,std::string g_name, int happiness, int compatibility)
{
    this->b_name = b_name;
    this->g_name = g_name;
    this->happiness = happiness;
    this->compatibility = compatibility;
}

std::string Couples::get_b_name()
{
    return this->b_name;
}
std::string Couples::get_g_name()
{
    return this->g_name;
}
int Couples::get_happiness()
{
    return this->happiness;
}
int Couples::get_compatibility()
{
    return this->compatibility;
}
