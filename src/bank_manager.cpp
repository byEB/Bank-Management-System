#include <bank_manager.h>


void BankManager::BankManagerMain()
{
    while(!stopped_.load())
    {

        menuPtr->MainMenuRunner();
        if(commetResult_ == BankManagerCommentTypes::SIGN_IN)
        {
            SignedResult_ = accountManagerPtr_->SignIn(menuResults_["email"], menuResults_["password"]);
            if(SignedResult_)
            {
                accountManagerPtr_->PrintAccountInfos();
            }
            stopped_.store(true);
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
