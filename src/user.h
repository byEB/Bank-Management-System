#ifndef USER_HEADER
#define USER_HEADER
#include <string>

class User
{
private:
    std::string user_;
    std::string email_;
    std::string password_;

public:
    User(const std::string& user, const std::string& email, const std::string& password)
    {
        user_ = user;
        email_ = email;
        password_ = password;
    }
};



#endif