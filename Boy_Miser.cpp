#include "Boy_Miser.h"
#include <bits/stdc++.h>

Boy_Miser::Boy_Miser(std::string name,int attraction,int budget,int intelligence,int req_attraction)
{
    this->name = name;
    this->attraction = attraction;
    this->budget = budget;
    this->intelligence = intelligence;
    this->req_attraction = req_attraction;
}

std::string Boy_Miser::getname()
{
    return this->name;
}

int Boy_Miser::get_attraction()
{
    return this->attraction;
}

int Boy_Miser::get_budget()
{
    return this->budget;
}

int Boy_Miser::get_intelligence()
{
    return this->intelligence;
}

int Boy_Miser::get_req_attraction()
{
    return this->req_attraction;
}