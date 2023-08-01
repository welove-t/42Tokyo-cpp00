#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		readInput(void) const;

	public:
		void	addContact(void);
		void	searchContact(void);
		void	showContact(void) const;
		void	exit(void) const;
		void	start(void) const;
};

#endif
