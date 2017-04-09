#include <string>
#include "Boy.h"
#ifndef Boy_Miser_H_
#define Boy_Miser_H_

class Boy_Miser: private Boy 
{
    public:
        Boy_Miser(std::string, int, int, int, int);
        std::string getname();
        int get_attraction();
        int get_budget();
        int get_intelligence();
        int get_req_attraction();
};
#endif