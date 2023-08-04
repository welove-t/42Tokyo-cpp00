#include "PhoneBook.hpp"

void	PhoneBook::start(void)
{
	std::cout << "Phone Book Start !!" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i;

	contacts[i % 8].settingInput();
	contacts[i % 8].setIndex(i);
	i++;
}

void	PhoneBook::showContact(void) const
{
	for (int i = 0; i < 8; i++)
	{
		contacts[i].viewList(i);
	}
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
				if (!contacts[index - 1].checkContactIndex(index - 1))
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

bool	PhoneBook::searchContact(void)
{
	int index;

	index = readIndexInput() - 1;
	if (index == -2)
		return true;
	if (index == -1)
	 	return false;
	contacts[index].viewList(index);
	return true;
}
