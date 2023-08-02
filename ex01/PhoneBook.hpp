#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

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
		void	start(void);
		void	testSet(void);
};

#endif
