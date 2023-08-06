#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <sstream>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		readIndexInput(void) const;
	public:
		void	addContact(void);
		void	showContact(void) const;
		bool	searchContact(void) const;
		void	exit(void) const;
		void	start(void) const;
};

#endif
