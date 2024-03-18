/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:35:17 by luyang            #+#    #+#             */
/*   Updated: 2024/03/18 00:02:18 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl()
{
	bundle[0].level = "DEBUG";
	bundle[0].f = &Harl::debug;
	bundle[1].level = "INFO";
	bundle[1].f = &Harl::info;
	bundle[2].level = "WARNING";
	bundle[2].f = &Harl::warning;
	bundle[3].level = "ERROR";
	bundle[3].f = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double"
		"-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." 
		"You didn’t putenough bacon in my burger! If you did, "
		"I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." 
		"I’ve been coming for years whereas you started working "
		"here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;

	while (i < 4 && level.compare(bundle[i].level))
		i++;
	if (i != 4)
		(this->*bundle[i].f)();
}