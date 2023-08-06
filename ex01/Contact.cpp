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
			return "";
		}
		if (input.length() > 20)
		{
			std::cout << "Please write in 20 words or less" << std::endl;
			continue ;
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
	if ((this->firstName = getInput("firstName")) == "")
		return ;
	if ((this->lastName = getInput("lastName")) == "")
		return ;
	if ((this->nickName = getInput("nickName")) == "")
		return ;
	if ((this->phoneNumber = getInput("phoneNumber")) == "")
		return ;
	if ((this->darkestSecret = getInput("darkestSecret")) == "")
		return ;
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

void	Contact::searchList(void) const
{
	if (!this->checkContactIndex())
		return ;
	std::cout << "index:\t\t" << this->index << std::endl;
	std::cout << "firstName:\t" <<  this->firstName << std::endl;
	std::cout << "lasName:\t" <<  this->lastName << std::endl;
	std::cout << "nickName:\t" <<  this->nickName << std::endl;
	std::cout << "phoneNumber:\t" <<  this->phoneNumber << std::endl;
	std::cout << "darkestSecret:\t" <<  this->darkestSecret << std::endl;
	std::cout << std::endl;
}

void	Contact::setIndex(int index)
{
	this->index = index + 1;
}


/*
contactクラスはプライベート

*/
