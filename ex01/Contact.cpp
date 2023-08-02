#include "Contact.hpp"

std::string	Contact::getInput(void)
{
	std:: string input = "";

	std::cin >> input;
	return (input);
}


void	Contact::settingInput(void)
{
	std:: cout << "firstName > " << std::flush;
	this->firstName = getInput();
	std:: cout << "firstName = "<< firstName << std::endl;
}
