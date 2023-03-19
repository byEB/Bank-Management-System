#ifndef MENU
#define MENU



#include <string>
#include <map>
#include <mutex>
#include <thread>
#include <bank_types.h>




#define SLEEP_MS 100000

#define OUTRO(x) \
    std::cout<<"\n\n\tSelect Option (1 to "#x")"<<std::endl; \
    std::cout<<"\n\n\tEnter Your Choice : "<<std::endl; \



class BaseMenu
{
public:

    enum class MenuTypes
    {
        MAIN_SCREEN,
        ADMIN_SCREEN,
        CUSTOMER_SCREEN
    };

private:
    std::atomic<bool> isCoosed = false;
    std::atomic<bool> stopped = false;
    std::atomic<bool> enableChoice = false;
    std::unique_ptr<std::thread> mainMenuRunner;
    // std::unique_ptr<AccountManager> accountManagerPtr;
    std::condition_variable cv;

    std::map<std::string,std::string> GuiResults;
    BankManagerCommentTypes CommentType_;
    std::function<void(std::map<std::string, std::string>, BankManagerCommentTypes)> SetSgnResultsCallback_;
    std::function<bool()> CheckStatusCb_;
    std::function<void(bool)> SendExitCb_;

    MenuTypes currentMenuTypes_;

    // std::function<bool(std::string, std::string)> SignCallback;
    std::mutex menuMtx_;
    int opt = INT_MIN;

public:
    BaseMenu(MenuTypes currentMenuTypes ,std::function<void(std::map<std::string, std::string>, BankManagerCommentTypes)> SetResultsCallback, std::function<bool()> CheckStatusCb, std::function<void(bool)> SendExitCb):
    SetSgnResultsCallback_(SetResultsCallback),
    CheckStatusCb_(CheckStatusCb),
    currentMenuTypes_(currentMenuTypes),
    SendExitCb_(SendExitCb){}

    void checkChoice(int opt);

    void MainIntro();

    void MainScreenMenu();

    void  AdminSecreenMenu();

    void CustomerSecreenMenu();

    void MainMenuRunner();

    // void startMenu();
    // void exitMenu();
};


#endif