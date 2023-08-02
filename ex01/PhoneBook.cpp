#include "PhoneBook.hpp"

void	PhoneBook::start(void)
{
	std::cout << "Phone Book Start !!" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i;

	contacts[i % 8].settingInput();
	// this->contacts[i % 8].set
}
