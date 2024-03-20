/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:40:55 by luyang            #+#    #+#             */
/*   Updated: 2024/03/20 00:42:05 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("noname"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor for " << this->getName() << " called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor for " << this->getName() << " called." << std::endl;

}

ClapTrap::ClapTrap(ClapTrap &f)
{
	std::cout << "Constructor for " << this->getName() << " called." << std::endl;
	*this = f;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for " << this->getName() << " called." << std::endl;
}

std::string	&ClapTrap::getName(void) 
{
	return(_name);
}

int	&ClapTrap::getHealth(void) 
{
	return (_hitPoints);
}

int	&ClapTrap::getEnergy(void) 
{
	return (_energyPoints);
}

int	&ClapTrap::getDamage(void) 
{
	return (_attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHealth(int hitPoints)
{
	_hitPoints = hitPoints;
}

void	ClapTrap::setEnergy(int energyPoints)
{
	_energyPoints = energyPoints;
}

void	ClapTrap::setDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->getHealth() <= 0 || this->getEnergy() <= 0)
	{
		std::cout << "ClapTrap " << this->getName()
			<< " has below 0 hit points or energy points." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->getName() << " attacks "
		<< target << ", causing " << this->getDamage()
		<< " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHealth() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has below 0 Hit Points" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->getName() << " gets "
		<< amount << " points of damage." << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHealth() <= 0 || this->getEnergy() <= 0)
	{
		std::cout << "ClapTrap " << this->getName()
			<< " has below 0 hit points or energy points." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->getName() << " gains " << amount 
		<< " hit point(s) back through repairing." << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
}

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
	stream << "Name: " << clapTrap.getName() << \
	" | Hitpoints: " << clapTrap.getHealth() << \
	" | Energy Points: " << clapTrap.getEnergy() << \
	" | Attack Damage: " << clapTrap.getDamage();
	return (stream);
}

//question -?? why when i use this->_name in the getter function, it does not work with the << operator overload??