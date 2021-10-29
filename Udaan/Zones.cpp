

#include "Zones.h"

map<int, int> Zones::pin_Cases_Map;

int Zones::Update_Zone_Case_Count(int pin) {

    pin_Cases_Map[pin] += 1;
    return true;
}


int Zones::Get_Zone_Status(int pin) {

    int case_count  = pin_Cases_Map[pin];

    //Assumtion to 0 being green
    if(case_count < 5 && case_count > 0) {
        return ORANGE;
    }

    if( case_count >= 5) {
        return RED;
    }

    // Return default
    return GREEN;
}

