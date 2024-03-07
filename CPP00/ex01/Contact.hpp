#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
private:
	std::string	_fName;
	std::string	_lName;
	std::string	_nickname;
	std::string	_secret;
	std::string	_number;
	int		_index;
	
	std::string	_getinput(std::string str);

public:
	Contact();
	~Contact();
	void	init(void);
	void	setIndex(int i);
	void	printTable(int i) const;
	std::string	lenRestrict(std::string str) const;
	void	printContact(int i) const;
};

#endif
