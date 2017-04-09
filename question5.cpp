#include "make_couples.h"

int main()
{
    std::vector<Boy_Miser> mb;
    std::vector<Girl_Choosy> gc;
    make_couples m;
    m.diff_mechanism(mb, gc);
    return 0;
}