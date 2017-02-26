#include "Boy_Generous.h"
#include <bits/stdc++.h>

Boy_Generous::Boy_Generous(std::string name,int attraction,int budget,int intelligence,int req_attraction)
{
    this->name = name;
    this->attraction = attraction;
    this->budget = budget;
    this->intelligence = intelligence;
    this->req_attraction = req_attraction;
}

std::string Boy_Generous::getname()
{
    return this->name;
}

int Boy_Generous::get_attraction()
{
    return this->attraction;
}

int Boy_Generous::get_budget()
{
    return this->budget;
}

int Boy_Generous::get_intelligence()
{
    return this->intelligence;
}

int Boy_Generous::get_req_attraction()
{
    return this->req_attraction;
}