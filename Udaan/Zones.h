
#ifndef __ZONES_H_
#define __ZONES_H_

#define GREEN   0
#define ORANGE  1
#define RED     2


#include <map>
using namespace std;

class Zones {


    public:
        // Updates cases count using pin
        static int Update_Zone_Case_Count(int pin);

        // Returns Zone status (GREEN, RED, ORANGE)
        static int Get_Zone_Status(int pin);

    private:

        // pincode : Number of cases 
        static map<int, int> pin_Cases_Map;
};

#endif

