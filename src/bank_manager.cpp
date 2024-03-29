#include <bank_manager.h>


void BankManager::BankManagerMain()
{
    while(!stopped_.load())
    {

        menuPtr->menuController();
        if(commetResult_ == BankManagerCommentTypes::SIGN_IN)
        {
            SignedResult_ = accountManagerPtr_->SignIn(menuResults_["email"], menuResults_["password"]);
            if(SignedResult_)
            {
                std::string account_type = accountManagerPtr_->getAccountType();
                if(account_type == "ADMIN")
                {
                    menuPtr->SetMenuType(MenuTypes::ADMIN_SCREEN);
                }
                else if (account_type == "CUSTOMER")
                {
                    menuPtr->SetMenuType(MenuTypes::CUSTOMER_SCREEN);
                }
                commetResult_ =BankManagerCommentTypes::WAIT;
            }
            // stopped_.store(true);
        }
        // std::cout<<"sss"<<std::endl;
        // std::this_thread::sleep_for(std::chrono::seconds(2));

    }   
}


void BankManager::RunBankManager()
{
    stopped_.store(false);
    bankManagerThr = std::make_unique<std::thread>(&BankManager::BankManagerMain, this);
}



void BankManager::Close()
{
    bankManagerThr->join();
    // menuPtr->exitMenu();
}
