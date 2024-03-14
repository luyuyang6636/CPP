/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:31:36 by luyang            #+#    #+#             */
/*   Updated: 2024/03/14 22:47:36 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRIAN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory address of string is " << &str << std::endl;
	std::cout << "The memory address held by strngPTR is " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is  " << &stringREF << std::endl;
	std::cout << "The value of the string valuable is " << str << std::endl;
	std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;
}
