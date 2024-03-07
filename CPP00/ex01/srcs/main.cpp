#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	input = "";

	book.title();
	while (input.compare("EXIT"))
	{
		std::cout << ">" << std::flush;
		std::cin >> input;
		if (!input.compare("ADD"))
			book.addContact();
		else if(!input.compare("SEARCH"))
			book.searchContact();
	}
	return (0);
}
