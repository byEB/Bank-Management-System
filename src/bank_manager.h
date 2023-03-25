#ifndef BANK_MANAGER
#define BANK_MANAGER

#include <account_manager.h>
#include <bank_types.h>
#include <menu.h>


class BankManager
{
private:
    std::atomic<bool> stopped_;
    std::unique_ptr<BaseMenu> menuPtr = nullptr;
    std::unique_ptr<AccountManager> accountManagerPtr_ = nullptr;
    std::unique_ptr<std::thread> bankManagerThr;
    std::map<std::string, std::string> menuResults_;
    bool isChoosed;

    BankManagerCommentTypes commetResult_;
    bool SignedResult_ = false;
    std::atomic<bool> stopMenu;

protected:

    void SetMenuResults(std::map<std::string, std::string> result, BankManagerCommentTypes commentResult)
    {

        menuResults_ = result;
        commetResult_ = commentResult;
        SignedResult_ = accountManagerPtr_->SignIn(result["email"], result["password"]);
    }

    void SetSignedResults(bool SignedResult)
    {   
        SignedResult_ = SignedResult;

    }

    bool GetSignedResult()
    {
        return SignedResult_;
    }


    void SetStoppedVal(bool val)
    {
        return stopped_.store(val);
    }

public:
    BankManager()
    {
        accountManagerPtr_ = std::make_unique<AccountManager>("../database/bank.sqlite3", std::bind(&BankManager::SetSignedResults, this, std::placeholders::_1));
        menuPtr = std::make_unique<BaseMenu>(MenuTypes::MAIN_SCREEN,std::bind(&BankManager::SetMenuResults, this, std::placeholders::_1, std::placeholders::_2), std::bind(&BankManager::GetSignedResult, this), std::bind(&BankManager::SetStoppedVal, this, std::placeholders::_1));
    }

    void BankManagerMain();
    void RunBankManager();
    void Close();
};


#endif //BANK_MANAGER