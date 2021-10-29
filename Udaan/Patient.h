
#ifndef __PATIENT_H_
#define __PATIENT_H_

#include "User.h"

class Patient : public User {


    public:

        int Update_Covid_result;

        // Constructor calling super constuctor
        Patient (string Name, long int phone, int pin) {
            User(Name, phone, pin);
            User::user_db.insert({phone, this});
        }

        // User API : Update user symptoms
        void Update_Symptoms (int symptoms, bool travel_history_exists, bool prev_contact_with_postitive_patient);
        
        // User API : Returns risk is percentage
        int Get_Covid_Risk_Per ();

        // Admin API : Update covid result
        void Update_Covid_Result(bool result);

        // Verify changes
        bool Get_Covid_Result();

    private:
        bool isPositive;
        int risk_factor;

};



#endif