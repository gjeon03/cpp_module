#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook book;

	while (1)
	{
		std::cout << "Enter a command(ADD or SEARCH oe EXIT)\n";
		std::cin >> cmd;
		if (cmd == "ADD")
			book.addContact();
		else if (cmd == "SEARCH")
			book.findContact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Please enter ADD, SEARCH or EXIT\n";
	}
	return (0);
}