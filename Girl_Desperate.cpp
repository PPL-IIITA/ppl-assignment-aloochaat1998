#include "Girl_Desperate.h"

Girl_Desperate::Girl_Desperate(std::string name, int attraction, int budget, int intelligence, int status)
{
    this->name = name;
    this->attraction = attraction;
    this->budget = budget;
    this->intelligence = intelligence;
    this->status=0;
}

std::string Girl_Desperate::getname()
{
    return this->name;
}

int Girl_Desperate::get_attraction()
{
    return this->attraction;
}

int Girl_Desperate::get_budget()
{
    return this->budget;
}

int Girl_Desperate::get_intelligence()
{
    return this->intelligence;
}

int Girl_Desperate::get_status()
{
    return this->status;
}

void Girl_Desperate::set_status()
{
    this->status=1;
}