#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "User.h"
#include <vector>

using namespace std;

class UserManager {
    vector <User> users;

public:
    User getDataNewUser();//zmien to pozniej na private

    void addUser();
    void wyswietl ();
};

#endif // USERMANAGER_H
