#include "Contact.hpp"

Contact::Contact()
{
	this->index = 0;
}

std::string	Contact::getInput(std:: string const str)
{
	std:: string input = "";

	do
	{
		std:: cout << str << " > " << std::flush;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return NULL;
		}
		if (std::cin.good() && !input.empty())
			break ;
		else
		{
			std::cin.clear();
			std::cout << "invalid value" << std::endl;
		}
	} while(true);
	return input;
}

bool	Contact::checkContactIndex(void) const
{
	if (this->index <= 0)
		return false;
	return true;
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

void	Contact::viewList(void) const
{
	if (!this->checkContactIndex())
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
