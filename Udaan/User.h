

#ifndef __USER_H_
#define __USER_H_

#include <map>
#include <string>

#define COUGH   1       // 1
#define COLD    1<<1    // 10
#define FEVER   1<<2    // 100 

using namespace std;

class User {

    public:
        User(){}
       ~User() {}
        User(string username, long int phone, int pincode);
        
        int Get_Pin();
        static map <long int, User*> user_db; 

    private:
        string Name;
        long int phone;
    protected:
        int pincode;



};

#endif

