/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:37:36 by luyang            #+#    #+#             */
/*   Updated: 2024/03/18 00:16:47 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	std::string	input;

	if (argc != 2)
		std::cout << "Wrong number of input!" << std::endl;
	else
	{
		input = argv[1];
		harl.complain(input);
	}
	return (0);
}
