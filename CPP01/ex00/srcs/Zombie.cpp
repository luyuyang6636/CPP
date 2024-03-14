/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:01:31 by luyang            #+#    #+#             */
/*   Updated: 2024/03/14 22:26:24 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "empty";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has be destructed..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name 
		<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

