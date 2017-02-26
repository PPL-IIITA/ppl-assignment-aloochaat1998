#include "Girl_Normal.h"
#include <bits/stdc++.h>

Girl_Normal::Girl_Normal(std::string name, int attraction, int budget, int intelligence, int status)
{
    this->name = name;
    this->attraction = attraction;
    this->budget = budget;
    this->intelligence = intelligence;
    this->status=0;
}

std::string Girl_Normal::getname()
{
    return this->name;
}

int Girl_Normal::get_attraction()
{
    return this->attraction;
}

int Girl_Normal::get_budget()
{
    return this->budget;
}

int Girl_Normal::get_intelligence()
{
    return this->intelligence;
}

int Girl_Normal::get_status()
{
    return this->status;
}

void Girl_Normal::set_status()
{
    this->status=1;
}