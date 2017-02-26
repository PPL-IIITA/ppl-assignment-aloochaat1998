#include "Boy_Geeks.h"
#include <bits/stdc++.h>

Boy_Geeks::Boy_Geeks(std::string name,int attraction,int budget,int intelligence,int req_attraction)
{
    this->name = name;
    this->attraction = attraction;
    this->budget = budget;
    this->intelligence = intelligence;
    this->req_attraction = req_attraction;
}

std::string Boy_Geeks::getname()
{
    return this->name;
}

int Boy_Geeks::get_attraction()
{
    return this->attraction;
}

int Boy_Geeks::get_budget()
{
    return this->budget;
}

int Boy_Geeks::get_intelligence()
{
    return this->intelligence;
}

int Boy_Geeks::get_req_attraction()
{
    return this->req_attraction;
}