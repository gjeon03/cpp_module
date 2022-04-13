#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int length;
	void contactInfo();
	void contactRowInfo(int index, char separator, int cellwidth);
	void printBook();

public:
	PhoneBook();
	void addcontact();
	void findcontact();
};

#endif