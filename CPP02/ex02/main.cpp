/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:14:55 by luyang            #+#    #+#             */
/*   Updated: 2024/03/19 16:21:51 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	Fixed	f1(100);
	Fixed	f2(42.42f);
	Fixed	f3;
	Fixed	f4;
	Fixed	f5;

	f3 = f1 + f2;
	f4 = f1 / f2;
	f5 = f1 - f2;
	std::cout << f3 << std::endl;
	std::cout << f4 << std::endl;
	std::cout << f5 << std::endl;
}