#include "Girl_Choosy.h"
#include <bits/stdc++.h>

Girl_Choosy::Girl_Choosy(std::string name, int attraction, int budget, int intelligence, int status)
{
    this->name = name;
    this->attraction = attraction;
    this->budget = budget;
    this->intelligence = intelligence;
    this->status=0;
}

std::string Girl_Choosy::getname()
{
    return this->name;
}

int Girl_Choosy::get_attraction()
{
    return this->attraction;
}

int Girl_Choosy::get_budget()
{
    return this->budget;
}

int Girl_Choosy::get_intelligence()
{
    return this->intelligence;
}

int Girl_Choosy::get_status()
{
	return this->status;
}

void Girl_Choosy::set_status()
{
    this->status=1;
}