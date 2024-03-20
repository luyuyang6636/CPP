/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:54:10 by luyang            #+#    #+#             */
/*   Updated: 2024/03/20 00:19:00 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	vik("Viktor");
	ClapTrap	joe("Joseph");

	std::cout << vik << std::endl;
	std::cout << joe << std::endl;

	vik.attack("Joseph");
	joe.takeDamage(0);
	for (int i = 0; i < 3; i++)
	{
		joe.attack("Viktor");
		vik.takeDamage(0);
	}
	for (int i = 0; i < 3; i++)
	{
		joe.beRepaired(1);
		vik.beRepaired(1);
	}
	return (0);
}
