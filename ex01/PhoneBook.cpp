#include "PhoneBook.hpp"

void	PhoneBook::start(void) const
{
	std::cout << "------- Phone Book Start !! -------" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i;

	contacts[i % 8].settingInput();
	contacts[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::showContact(void) const
{
	std:: cout << "-----------------------------------------" << std::endl;
	std:: cout << "                Contacts                 " << std::endl;
	std:: cout << "-----------------------------------------" << std::endl;
	if (!contacts[0].checkContactIndex())
	{
		std:: cout << "no contacts yet" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
		contacts[i].viewList();
}

int 	PhoneBook::readIndexInput(void) const
{
	std::string str;
	int		index;

	do
	{
		std::cout << "  index > " << std::flush;
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return 0;
		}
		if (str.empty())
			continue ;
		if (!str.compare("EXIT"))
			return -1;
		if (std::cin.good())
		{
			std::stringstream	ss(str);
			if (ss >> index && (1 <= index && index <= 8))
			{
				if (!contacts[index - 1].checkContactIndex())
					std::cout << "no contact" << std::endl;
				else
        			return index;
			}
			else
        		std::cout << "invalid value" << std::endl;
		}
		else
			std::cout << "input error!" << std::endl;
		std::cin.clear();
	} while (true);

	return index;
}

bool	PhoneBook::searchContact(void) const
{
	int index;

	if (!contacts[0].checkContactIndex())
		return true;
	index = readIndexInput() - 1;
	if (index == -2)
		return true;
	if (index == -1)
	 	return false;
	contacts[index].searchList();
	return true;
}
