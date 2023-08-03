#include "Contact.hpp"


std::string	Contact::getInput(std:: string const str)
{
	std:: string input = "";

	std:: cout << str << " > " << std::flush;
	std::getline(std::cin, input);
	return (input);
}

void	Contact::settingInput(void)
{
	std:: cout << "-----------------------------------------" << std::endl;
	std:: cout << "  Please enter the required information  " << std::endl;
	std:: cout << "-----------------------------------------" << std::endl;

	this->firstName = getInput("firstName");
	this->lastName = getInput("lastName");
	this->nickName = getInput("nickName");
	this->phoneNumber = getInput("phoneNumber");
	this->darkestSecret = getInput("darkestSecret");

	std:: cout << "Completion of registration !" << std::endl;
}

std::string	Contact::printFormat(std::string str) const
{
	if (str.length() <= 10)
		return str;
	return str.substr(0, 9) + ".";

}

void	Contact::viewList(int index) const
{
	if (this->index <= 0)
		return ;
	std::cout << "|" << std::setw(10) <<  this->index << std::flush;
	std::cout << "|" << std::setw(10) <<  printFormat(this->firstName) << std::flush;
	std::cout << "|" << std::setw(10) <<  printFormat(this->lastName) << std::flush;
	std::cout << "|" << std::setw(10) <<  printFormat(this->nickName) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::setIndex(int index)
{
	this->index = index + 1;
}
