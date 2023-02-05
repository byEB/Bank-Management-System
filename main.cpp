#include <iostream>
#include <sqlite3.h>
#include <user.h>
#include <memory>



void banking_intro()
{
    std::cout<<"\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
    std::cout<<"\n\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
	std::cout<<"\n*\t WELLCOME TO BANKING MANAGEMENT SYSTEM\t\t\t*";
	std::cout<<"\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
	std::cout<<"\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
    std::cout<<"\n\n\n";
}


/// @brief bu unique mi olsun bilemedim 
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


class Manager
{
private:
    std::shared_ptr<User> user;
    Database db;

public:
    Manager(const std::string& dbName):db(dbName){}

};




int main()
{
    Manager manager("test.db");
    banking_intro();
    int opt = INT_MIN;
    do
	{	//clrscr();
		std::cout<<"//=//=//=//=//=//=//=//=//=//=//=//=//=//=//";
		std::cout<<"\n//\t\tMAIN MENU\t\t  //";
		std::cout<<"\n//=//=//=//=//=//=//=//=//=//=//=//=//=//=//";
		std::cout<<"\n\n\t1>  CREATE NEW ACCOUNT";
		std::cout<<"\n\t2>  SIGN IN";
		std::cout<<"\n\t3>  EXIT";
		std::cout<<"\n\n\tSelect Option (1 to 3)";
		std::cout<<"\n\n\tEnter Your Choice : ";
		std::cin>>opt;
        if(opt<1)
        {
            throw std::runtime_error("! invalid choice ");
        }
        //select(opt);
        
	}while(opt!=3);
    



    return 0;
}