#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		int index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		void		settingInput(void);
		void		setIndex(int index);
		void		viewList(void) const;
		void		searchList(void) const;
		bool		checkContactIndex(void) const;
		std::string	printFormat(std::string const str) const;
		std::string	getInput(std::string const str);
};

#endif
