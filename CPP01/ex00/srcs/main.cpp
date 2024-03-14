/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:26:33 by luyang            #+#    #+#             */
/*   Updated: 2024/03/14 20:51:50 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int	main(void)
{
	Zombie	*z1;

	z1 = newZombie("Heap Zomb");
	z1->announce();
	randomChump("Stack Zomb");

	delete z1;
	return (0);
}
