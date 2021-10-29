
#include "Patient.h"
                
void Patient::Update_Symptoms (int symptoms, bool travel_history_exists, bool prev_contact_with_postitive_patient) {

    int symptoms_count = 0;
    while(symptoms) {
        symptoms_count += 1;
        symptoms = symptoms>>1;
    }

    if(symptoms_count == 0 && !travel_history_exists && !prev_contact_with_postitive_patient) {
        risk_factor = 5;
        return;
    }

    if(symptoms_count == 1 && (travel_history_exists || prev_contact_with_postitive_patient)) {
        risk_factor = 50;
        return;
    }

    if(symptoms_count == 2 && (travel_history_exists || prev_contact_with_postitive_patient)) {
        risk_factor = 75;
        return;
    } 

    if(symptoms_count > 2 && (travel_history_exists || prev_contact_with_postitive_patient)) {
        risk_factor = 95;
        return;
    }

}



void Patient::Update_Covid_Result (bool result ){
    isPositive = result;
}
        
bool Patient::Get_Covid_Result(){
    return isPositive;
}

int Patient::Get_Covid_Risk_Per () {
    return risk_factor;
}




