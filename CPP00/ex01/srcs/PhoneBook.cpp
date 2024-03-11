/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:13:37 by luyang            #+#    #+#             */
/*   Updated: 2024/03/07 00:54:43 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::title(void) const
{
	std::cout << "This is Lulu's awesome phonebook!" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "Intrsuction:" << std::endl;
	std::cout << "1, to add a contact, enter ADD."<< std::endl;
	std::cout << "2, to search for a contact, enter SEARCH." << std::endl;
	std::cout << "3, to exit, enter EXIT." << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i;

	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i);
	i++;
}

void	PhoneBook::printContact(void) const
{
	std::cout << "EXISTING CONTACTS" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "Index" << std::flush;
	std::cout << "|" << std::setw(10) << std::right << "First" << std::flush;
	std::cout << "|" << std::setw(10) << std::right << "Last" << std::flush;
	std::cout << "|" << std::setw(10) << std::right << "Nickname" << std::flush;
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------"<<std::endl;
	for (int i = 0; i < 8; i++)
		this->_contacts[i].printTable(i);
}

int	PhoneBook::readIndex(void) const
{
	int	i;
	const int	maxInt = 1000000;
	bool	check = false;

	std::cout << std::endl;
	while (check == false)
	{
		std::cout << "Please enter the index you wish to display full info: " << std::flush;
		std::cin >> i;
		if (std::cin.good() && i >= 0 && i <= 7)
			check = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(maxInt, '\n');
			std::cout << "Invalid index, please enter a number between 0 and 7!" << std::endl;
			std::cout << std::endl;
		}
	}
	return (i);
}

void	PhoneBook::searchContact() const
{
	int	i;
	
	this->printContact();
	i = this->readIndex();
	this->_contacts[i].printContact(i);
}