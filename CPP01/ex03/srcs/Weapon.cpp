/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:18:22 by luyang            #+#    #+#             */
/*   Updated: 2024/03/15 18:29:10 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void)
{
	std::string	&ref = this->_type;

	return (ref);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}
