#include <string>
#include "Boy.h"
#ifndef Boy_Generous_H_
#define Boy_Generous_H_

class Boy_Generous: private Boy 
{
    public:
        Boy_Generous(std::string, int, int, int, int);
        std::string getname();
        int get_attraction();
        int get_budget();
        int get_intelligence();
        int get_req_attraction();
};
#endif