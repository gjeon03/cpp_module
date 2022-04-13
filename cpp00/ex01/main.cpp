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
			book.addcontact();
		else if (cmd == "SEARCH")
			book.findcontact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "invalid command. please enter ADD, SEARCH or EXIT\n";
	}
	return (0);
}