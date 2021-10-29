
#include "Admin.h"
#include "Patient.h"
#include "Zones.h"
#include <iostream>

int Admin::Update_Result (long int user_id, bool result ){

    /* Check if user exists, if yes return true else return false */
    Patient *patient = (Patient*)User::user_db[user_id];  
    patient->Update_Covid_Result(result);
       
    return true;

}
