#ifndef __ADMIN_H
#define __ADMIN_H_

#include "User.h"

class Admin : public User {

    public:
        Admin (string Name, long int phone, int pin) {
            User(Name, phone, pin);
            User::user_db.insert({phone, this});
        }

        int Update_Result (long int user_id, bool result );
};



#endif