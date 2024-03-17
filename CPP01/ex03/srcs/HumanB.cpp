/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:18:17 by luyang            #+#    #+#             */
/*   Updated: 2024/03/15 18:57:03 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void) 
{
}

void	HumanB::attack(void) const
{
	if (this->_weapon != NULL)
		std::cout << _name << " attacks with their "
		<< _weapon->getType() << std::endl;
	else
		std::cout << _name << " does not have a weapon..." << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}
