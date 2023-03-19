#include <iostream>
#include <memory>

#include <bank_manager.h>



int main()
{

	auto manager = std::make_unique<BankManager>();
    manager->RunBankManager();
    manager->Close();
	
    return 0;
}