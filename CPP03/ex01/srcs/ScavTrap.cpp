/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:55:28 by luyang            #+#    #+#             */
/*   Updated: 2024/03/20 01:18:16 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScapTrap variable constructor called." << std::endl;
	setHealth(100);
	setDamage(20);
	setEnergy(50);
}

ScavTrap::ScavTrap(ScavTrap &f)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = f;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &rhs)
{
	std::cout << "ScavTrap assignment operator called." << std::endl;
	this->setName(rhs.getName());
	this->setHealth(rhs.getHealth());
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	return (*this);
}

ScavTrap:: ~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << getName() << std::endl;
}

void	ScavTrap::attack(const std::string name)
{
	std::cout << "ScavTrap " << getName() << " attacks "
		<< name << ", causing " << getDamage() 
		<< " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void	ScavTrap::guardGate()
{
	std::cout << getName() << " has entered Gate Keeper mode." << std::endl;
}