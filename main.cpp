#include <iostream>

#include <user.h>
#include <memory>
#include <bankmanager.h>



void banking_intro()
{
    std::cout<<"\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
    std::cout<<"\n\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
	std::cout<<"\n*\t WELLCOME TO BANKING MANAGEMENT SYSTEM\t\t\t*";
	std::cout<<"\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
	std::cout<<"\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
    std::cout<<"\n\n\n";
}





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