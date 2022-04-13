#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	std::string alignfield(std::string field, int cellwidth);

public:
	void fillContact();
	void printcontact();
	void printshortinfo(char separator, int cellwidth);
};

#endif
