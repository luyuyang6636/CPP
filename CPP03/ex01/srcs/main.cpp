/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:54:10 by luyang            #+#    #+#             */
/*   Updated: 2024/03/20 01:19:49 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	vik("Viktor");
	ScavTrap	joe("Joseph");

	std::cout << vik << std::endl;
	std::cout << joe << std::endl;

	for (int i = 0; i < 3; i++)
	{
		vik.attack("Joseph");
		joe.takeDamage(vik.getDamage());
	}
	for (int i = 0; i < 3; i++)
	{
		joe.attack("Viktor");
		vik.takeDamage(joe.getDamage());
	}
	for (int i = 0; i < 3; i++)
	{
		joe.beRepaired(5);
		vik.beRepaired(5);
	}

	std::cout << vik << std::endl;
	std::cout << joe << std::endl;
	return (0);
}
