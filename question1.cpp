#include "make_couples.h"

int main()
{
    std::vector<Boy_Miser> mb;
    std::vector<Boy_Geeks> gb;
    std::vector<Boy_Generous> genb;
    std::vector<Girl_Choosy> gc;
    std::vector<Girl_Normal> gn;
    std::vector<Girl_Desperate> gd;
    make_couples m;
    m.extract(mb, gb, genb, gc, gn, gd);
    return 0;
}
