#include "../includes/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::_getinput(std::string str)
{
	std::string	input;
	bool	check = false;

	while (check == false)
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			check = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input, please try again :(" << std::endl;
		}
	}
	return (input);
}

void	Contact::init(void)
{
	std::cin.ignore();
	this->_fName = this->_getinput("What is your first name? ");
	this->_lName = this->_getinput("What is your last name? ");
	this->_nickname = this->_getinput("What is your nickname? ");
	this->_number = this->_getinput("What is your number? ");
	this->_secret = this->_getinput("What is your darkest secret? ");
	std::cout << std::endl;
}

void	Contact::setIndex(int i)
{
	this->_index = i;
}

std::string	Contact::lenRestrict(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::printTable(int i) const
{
	if (this->_fName.empty() || this->_lName.empty() || this->_nickname.empty())
		return;
	std::cout << "|" << std::setw(10) << std::right << i << std::flush;
	std::cout << "|" << std::setw(10) << std::right << this->lenRestrict(this->_fName) << std::flush;
	std::cout << "|" << std::setw(10) << std::right << this->lenRestrict(this->_lName) << std::flush;
	std::cout << "|" << std::setw(10) << std::right << this->lenRestrict(this->_nickname) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::printContact(int i) const
{
	if (this->_fName.empty())
	{
		std::cout << "This index does not exist :(" << std::endl;
		return;
	}
	std::cout << "**********************************" << std::endl;
	std::cout << "Index: " << i << std::endl;
	std::cout << "First Name: " << this->_fName << std::endl;
	std::cout << "Last Name: " << this->_lName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone #: " << this->_number << std::endl;
	std::cout << "Darkest Secret: " << this->_secret << std::endl;
	std::cout << std::endl;
}


