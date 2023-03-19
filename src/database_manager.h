#ifndef DATABASE_MANAGER
#define DATABASE_MANAGER


#include <sqlite3.h>
#include <string>
#include <iostream>
#include <bank_types.h>

class DatabaseManager
{
private:
    std::string databaseName;
    sqlite3 *db;
    char *zErrMsg = 0;

public:
    DatabaseManager(const std::string databaseName_):databaseName(databaseName_){}
  
    int ConnectDatabase();
    bool UserAuthenticate(std::string email_, std::string password_);
    UserInfo GetUserFromDatabase(std::string email, std::string password);
    void SetUserToDabase();
    
   
};

#endif