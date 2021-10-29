

#include "User.h"
#include <iostream>
map <long int, User*>  User::user_db; 

User::User(string username, long int phone, int pincode)  {
            Name = username;
            this->phone = phone;
            this->pincode = pincode;
}

