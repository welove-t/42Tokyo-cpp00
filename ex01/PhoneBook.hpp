#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <sstream>

class PhoneBook
{
	private:
		Contact	contacts[8];

	public:
		int		readIndexInput(void) const;
		void	addContact(void);
		void	showContact(void) const;
		bool	searchContact(void) const;
		void	exit(void) const;
		void	start(void) const;
};

#endif
