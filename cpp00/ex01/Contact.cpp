#include "Contact.hpp"

void Contact::fillContact()
{
	std::cout << "Please enter contact info:\n";
	std::cout << "first_name: ";
	std::cin >> this->first_name;
	if (!std::cin.good())
		return ;
	std::cout << "last_name: ";
	std::cin >> this->last_name;
	if (!std::cin.good())
		return ;
	std::cout << "nickname: ";
	std::cin >> this->nickname;
	if (!std::cin.good())
		return ;
	std::cout << "phone_number: ";
	std::cin >> this->phone_number;
	if (!std::cin.good())
		return ;
	std::cout << "darkest_secret: ";
	std::cin >> this->darkest_secret;
	if (!std::cin.good())
		return ;
	std::cout << "Contact is created\n";
}

void Contact::printContact()
{
	std::cout << "first_name: " << this->first_name << std::endl;
	std::cout << "last_name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone_number: " << this->phone_number << std::endl;
	std::cout << "darkest_secret: " << this->darkest_secret << std::endl;
}

std::string Contact::align(std::string str, int cellwidth)
{
	if ((int)str.size() > cellwidth)
		return (str.substr(0, cellwidth - 1) + ".");
	else
		return (std::string(cellwidth - str.size(), ' ') + str);
}

void Contact::printShortInfo(char separator, int cellwidth)
{
	std::cout << separator << align(this->first_name, cellwidth)
			  << separator << align(this->last_name, cellwidth)
			  << separator << align(this->nickname, cellwidth)
			  << separator << std::endl;
}