#ifndef BANK_MANAGER_HEADER
#define BANK_MANAGER_HEADER

#include <database.h>
#include <user.h>

class Manager
{
private:
    std::shared_ptr<User> user;
    Database db;

public:
    Manager(const std::string& dbName):db(dbName){}

};


#endif