#include <bits/stdc++.h>
#include "Boy_Miser.h"
#include "Boy_Geeks.h"
#include "Boy_Generous.h"
#include "Girl_Desperate.h"
#include "Girl_Normal.h"
#include "Girl_Choosy.h"
using namespace std;

#ifndef MAKE_COUPLES_H_
#define MAKE_COUPLES_H_

class make_couples
{
	public:
	void extract(std::vector<Boy_Miser> &, std::vector<Boy_Geeks> &, std::vector<Boy_Generous> &, std::vector<Girl_Choosy> &,
		std::vector<Girl_Normal> &, std::vector<Girl_Desperate> &);
	void make_new(std::vector<string> &,std::vector<Boy_Miser> &, std::vector<Boy_Geeks> &, std::vector<Boy_Generous> &, std::vector<Girl_Choosy> &,
		std::vector<Girl_Normal> &, std::vector<Girl_Desperate> &);
	void diff_mechanism(std::vector<Boy_Miser> &,std::vector<Girl_Choosy> &);
};

#endif