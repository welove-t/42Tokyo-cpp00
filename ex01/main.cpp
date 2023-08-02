#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook phoneBook;

	std::string input = "";
	phoneBook.start();
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD"))
			// phoneBook.addContact();
			;
		else if (input.compare("SEARCH"))
		{
			// phoneBook.showContact();
			// phoneBook.searchContact();
		}
		else
			std::cout << "bad command" << std::endl;
		std::cout << "input: " << std::flush;
		std::cin >> input;
	}
	return 0;
}

