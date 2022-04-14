#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->length = 0;
}

void PhoneBook::contactInfo()
{
	int index;

	std::cout << "Enter index of a contact: ";
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "You have entered wrong input" << std::endl;
		return;
	}
	if (index <= 0 || index > (this->length > 7 ? 8 : this->length))
		std::cout << "Index out of range\n";
	else
		this->contacts[index - 1].printContact();
}

void PhoneBook::printBook()
{
	int cellwidth = 10;
	char separator = '|';

	std::cout << std::setw(cellwidth) << "index"
			  << separator << std::setw(cellwidth) << "first name"
			  << separator << std::setw(cellwidth) << "last name"
			  << separator << std::setw(cellwidth) << "nickname"
			  << separator << std::endl;
	int index = 0;
	while (index < (this->length > 7 ? 8 : this->length))
	{
		std::cout << std::setw(cellwidth) << index + 1;
		this->contacts[index].printShortInfo(separator, cellwidth);
		index++;
	}
}

void PhoneBook::addContact()
{
	Contact newContact;

	newContact.fillContact();
	this->contacts[length % 8] = newContact;
	length++;
}

void PhoneBook::findContact()
{
	if (this->length == 0)
	{
		std::cout << "Phonebook is empty\n";
		return;
	}
	this->printBook();
	this->contactInfo();
	return;
}
