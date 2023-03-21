#ifndef BANK_TYPES
#define BANK_TYPES

#include <string>




struct Authorization
{
    bool ableToDeleteAccount;
    bool ableToAddNewAccount;
    bool ableToSetAuthority; // can give admin aut. or not 
};
 

struct AccountInfo
{
    int id;
    std::string name;
    std::string surname;
    std::string email;
    std::string password;
    std::string accountType;
    
};

struct UserInfo
{
    AccountInfo personelInfo;
    Authorization aviableAuthorization;
};


enum class AccountType
{
    ADMIN,
    CUSTOMER
};


struct SingResuls
{
    std::string email;
    std::string password;
};


enum class BankManagerCommentTypes
{
    SIGN_IN,
    CREATE_NEW_ACCOUNT,
    EDIT_ACCOUNT,
    DELETE_ACCOUNT,
    WAIT,
    EXIT
};


enum class MenuTypes
{
    MAIN_SCREEN,
    ADMIN_SCREEN,
    CUSTOMER_SCREEN
};


#endif