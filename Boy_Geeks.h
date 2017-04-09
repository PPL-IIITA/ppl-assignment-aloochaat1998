#include <string>
#include "Boy.h"
#ifndef Boy_Geeks_H_
#define Boy_Geeks_H_

class Boy_Geeks: private Boy 
{
    public:
        Boy_Geeks(std::string, int, int, int, int);
        std::string getname();
        int get_attraction();
        int get_budget();
        int get_intelligence();
        int get_req_attraction();
};
#endif