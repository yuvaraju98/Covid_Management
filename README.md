# Covid_Management
Inital commit

- User.h -  Base class having name, pincode and phone. Had userdb, a static map acting as DB
- Admin / Patient - Derived class for User base class with customised functionality
- Zones.h - public static functions to updated and retrieve data based on pincode
- Main.cpp - Driver function

Further improvements:

- Zones cases count can be updated when and while Admin updated a user of covid result using self pincode 
- Name, phone and pincode validation




Inital run result (main.cpp)

Registering Users...
Registering Admins...

Updating Patient symptoms
Patient_1 Risk Factor : 75
Patient_2 Risk Factor : 95

Updating covid result
Patient_1 Covid Result : 1
Patient_2 Covid Result : 0

Update Zones and get status : RED
