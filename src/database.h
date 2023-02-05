#ifndef DATABASE_HEADER
#define DATABASE_HEADER

#include <iostream>
#include <sqlite3.h>

class Database
{
private:
    sqlite3* db_;

public:
    Database(const std::string& databaseName){
        std::cout<<"database is creating..."<<std::endl;
        int rc = sqlite3_open("test.db", &db_);
        if(rc!=SQLITE_OK) throw std::runtime_error("error "+ std::to_string(sqlite3_errcode(db_)));
    }
    void InsertNewUser();
    bool CheckUser();
};


#endif