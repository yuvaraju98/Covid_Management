
#include <iostream>

#include "Patient.h"
#include "Admin.h"
#include "Zones.h"

using namespace std;

//Driver function
int main () {

    cout << "Registering Users..." << endl;
    Patient patient_instance_1 ("Raj", 9379124299, 560104);
    Patient patient_instance_2 ("Raja", 9379124277, 560102);
    Patient patient_instance_3 ("Raju", 9379124288, 560103);
    Patient patient_instance_4 ("Rama", 9379124266, 560105);

    cout << "Registering Admins..." << endl;
    Admin admin1 ("Seeta", 7945612311, 560104);
    Admin admin2 ("Rom", 7945612311, 560104);

    cout << endl << "Updating Patient symptoms" << endl;
    patient_instance_1.Update_Symptoms(COLD|COUGH, 1, 1);
    cout << "Patient_1 Risk Factor : " << patient_instance_1.Get_Covid_Risk_Per() << endl; 
    patient_instance_2.Update_Symptoms(COLD|COUGH|FEVER , 1, 0);
    cout << "Patient_2 Risk Factor : " << patient_instance_2.Get_Covid_Risk_Per() << endl; 

    cout << endl << "Updating covid result" << endl;
    admin1.Update_Result(9379124299, 1);
    cout << "Patient_1 Covid Result : " << patient_instance_1.Get_Covid_Result() << endl; 
    admin1.Update_Result(9379124277, 0);
    cout << "Patient_2 Covid Result : " << patient_instance_2.Get_Covid_Result() << endl; 
    

    cout << endl << "Update Zones and get status" << endl;

    Zones::Update_Zone_Case_Count(560104);
    Zones::Update_Zone_Case_Count(560104);
    Zones::Update_Zone_Case_Count(560104);
    Zones::Update_Zone_Case_Count(560104);
    Zones::Update_Zone_Case_Count(560104);
    Zones::Update_Zone_Case_Count(560104);    

    switch(Zones::Get_Zone_Status(560104)) {
        case GREEN:
            cout << "GREEN" << endl;
            break;
        case RED: 
            cout << "RED" <<endl;
            break;
        case ORANGE:
            cout << "ORANGE" << endl;
            break;
    }
    return 1;

}



