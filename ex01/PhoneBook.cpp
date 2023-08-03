#include "PhoneBook.hpp"

void	PhoneBook::start(void)
{
	std::cout << "Phone Book Start !!" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i;
	printf("static int: %d\n", i);
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
