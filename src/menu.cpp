#include <menu.h>


#include <iostream>

void BaseMenu::checkChoice(int opt)
{
    if(currentMenuTypes_ == MenuTypes::MAIN_SCREEN)
    {
        enableChoice = opt>0&&opt<4;
    }
    else if (currentMenuTypes_ == MenuTypes::ADMIN_SCREEN)
    {
        enableChoice = opt>0&&opt<5;
    }
    else if (currentMenuTypes_ == MenuTypes::CUSTOMER_SCREEN)
    {
        enableChoice = opt>0&&opt<4;
    }
    else
    {
        std::cout<<"not enable choce"<<std::endl;
    }
    
}

void BaseMenu::MainIntro()
{
std::cout<<"\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
std::cout<<"\n\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
std::cout<<"\n*\t WELLCOME TO BANKING MANAGEMENT SYSTEM\t\t\t*";
std::cout<<"\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
std::cout<<"\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
std::cout<<"\n\n\n";

}

void BaseMenu::MainScreenMenu()
{
    std::cout<<"//=//=//=//=//=//=//=//=//=//=//=//=//=//=//";
    std::cout<<"\n//\t\tMAIN MENU\t\t  //";
    std::cout<<"\n//=//=//=//=//=//=//=//=//=//=//=//=//=//=//";
    std::cout<<"\n\n\t1>  CREATE NEW ACCOUNT";
    std::cout<<"\n\t2>  SIGN IN";
    std::cout<<"\n\t3>  EXIT";
}

void  BaseMenu::AdminSecreenMenu()
{
    std::cout<<"//=//=//=//=//=//=//=//=//=//=//=//=//=//=//";
    std::cout<<"\n//\t\tSELECT AND PROCESS\t\t  //";
    std::cout<<"\n//=//=//=//=//=//=//=//=//=//=//=//=//=//=//";
    std::cout<<"\n\n\t1>  ADD NEW ACCOUNT";
    std::cout<<"\n\t2>  EDIT ACCOUNT";
    std::cout<<"\n\t3>  DELETE ACCOUNT";
    std::cout<<"\n\t4>  EXIT";

}

void BaseMenu::CustomerSecreenMenu()
{
    //not defined
}

void BaseMenu::MainMenuRunner()
{
    while(!stopped.load())
    {	
        // std::unique_lock<std::mutex> lock(menuMtx_);
        MainIntro();
        switch (currentMenuTypes_)
        {
        case MenuTypes::MAIN_SCREEN:
            MainScreenMenu();
            //buraya bir macro yakışır
            OUTRO(3);
            std::cin>>opt;
            checkChoice(opt);
            break;
        case MenuTypes::ADMIN_SCREEN:
            AdminSecreenMenu();
            OUTRO(4);
            std::cin>>opt;
            checkChoice(opt);
            break;
        case MenuTypes::CUSTOMER_SCREEN:
            std::cout<<"not imlemented yet \n";
            break;
        default:
            break;
        }
        
        if(enableChoice.load())
        {
            switch(opt)
            {
                case 1:
                    std::cout<<"create account"<<std::endl;
                    break;
                case 2:
                    {
                        CommentType_ = BankManagerCommentTypes::SIGN_IN;
                        std::string email;
                        std::string password;
                        std::cout<<"PLEASE ENTER YOUR EMAIL: "<<std::endl;
                        std::cin>>email;
                        GuiResults["email"] = email;
                        std::cout<<"PLEASE ENTER YOUR PASSWORD:";
                        std::cin>>password;
                        GuiResults["password"] = password;
                        
                        SetSgnResultsCallback_(GuiResults, CommentType_);
                        if(CheckStatusCb_())
                        {
                            std::cout<<"you signed .. "<<std::endl;
                            {
                                std::lock_guard<std::mutex> lock(menuMtx_);
                                stopped.store(true);
                                SendExitCb_(true);
                            }
                        }
                        else
                        {
                            std::cout<<"you email or password is not correct please try again..."<<std::endl;
                        }

                    }
                    break;
                
                case 3:
                    std::cout<<"thanx for visiting... \n";
                    stopped.store(true);
                    SendExitCb_(true);
                    break;;
    
                default:
                    std::cout<<"thanx for visiting..."<<std::endl;
                    break;
            };
        }
        else
        {
            throw std::runtime_error("! enable choice ");
        } 
        
    }
}

// void startMenu()
// {
//     stopped.store(false);
//     mainMenuRunner = std::make_unique<std::thread>(&BaseMenu::MainMenuRunner, this);
// }
// void exitMenu()
// {
//     if(mainMenuRunner->joinable())
//         mainMenuRunner->join();
// }
