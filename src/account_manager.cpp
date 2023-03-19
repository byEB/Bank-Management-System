#include <account_manager.h>


bool AccountManager::SignIn(std::string email, std::string password)
{
    if(isDataBaseConnected && databasePtr->UserAuthenticate(email, password))
    {   
        //get account info
        UserInfo userInfo;
        SetAccountStatusCb_(true);
        userInfo = databasePtr->GetUserFromDatabase(email, password);
        if(userInfo.personelInfo.accountType == "ADMIN")
        {
            accountPtr = std::make_unique<Admin>();
            accountPtr->SetAccountInfo(userInfo.personelInfo);
            accountPtr->SetAuthorizationInfo(userInfo.aviableAuthorization);
        }
        return true;
    }
    return false;
}


void AccountManager::PrintAccountInfos()
{
    UserInfo info;
    info.personelInfo = accountPtr->GetAccountInfo();
    std::cout<<"Hello : "<<info.personelInfo.name<<std::endl;

    
}

bool AccountManager::ExitAccount()
{
    if(accountPtr != nullptr)
    {
        SetAccountStatusCb_(false);
        return true;
    }
    return false;
}
