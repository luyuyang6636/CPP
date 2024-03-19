/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:49:23 by luyang            #+#    #+#             */
/*   Updated: 2024/03/19 00:13:33 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	_number;
	static const int	_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int integer);
	Fixed(const float floating);
	Fixed	&operator=(const Fixed &rhs);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &f);

#endif
