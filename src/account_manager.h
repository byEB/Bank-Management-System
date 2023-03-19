
#ifndef ACCOUNDBUILDER
#define ACCOUNDBUILDER

#include <memory.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <atomic>
#include <thread>
#include <functional>
#include <map>


#include <bank_types.h>
#include <database_manager.h>



class AccoundBuilder
{   
public:
    virtual ~AccoundBuilder(){}
    virtual void SetAccountInfo(AccountInfo accountInfo) = 0;
    virtual void SetAuthorizationInfo(Authorization authorizationInfo) = 0;
    virtual AccountInfo GetAccountInfo() = 0;
};



class Admin : public AccoundBuilder
{
private:
    AccountInfo accountInfo_;
    Authorization authorizationInfo_;
    
public:
    Admin(){}
    void SetAccountInfo(AccountInfo accountInfo) 
    {
        accountInfo_ = accountInfo;
    }
    void SetAuthorizationInfo(Authorization authorizationInfo) 
    {
        authorizationInfo_ = authorizationInfo;
    }

    AccountInfo GetAccountInfo()
    {
        return accountInfo_;
    }

};



class Customer : public AccoundBuilder
{
public:
    //  void AccountRunner()
    // {

    // }
    // void GetAccountInfo()
    // {
        
    // }

    // void GetAccountInfo()
    // {
        
    // }
};

class AccountManager
{
private:
    std::unique_ptr<AccoundBuilder> accountPtr = nullptr;
    std::shared_ptr<DatabaseManager> databasePtr;
    std::atomic<bool> isDataBaseConnected = false;
    std::function<void(bool)> SetAccountStatusCb_;
public:
    AccountManager(std::string databaseName, std::function<void(bool)> SetAccountStatusCb):
    SetAccountStatusCb_(SetAccountStatusCb)
    {
        //create database
        databasePtr = std::make_shared<DatabaseManager>(databaseName);
        if(databasePtr->ConnectDatabase())
        {
            isDataBaseConnected = true;
        }

    }
    bool SignIn(std::string email, std::string password);
    // bool CreateAccount(std::string name, std::string surname, std::string password);

    void PrintAccountInfos();
    bool ExitAccount();
};

#endif