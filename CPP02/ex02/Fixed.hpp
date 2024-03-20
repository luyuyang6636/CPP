/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:54:14 by luyang            #+#    #+#             */
/*   Updated: 2024/03/19 16:04:35 by luyang           ###   ########.fr       */
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
	~Fixed();

	Fixed	&operator=(const Fixed &rhs);
	bool	operator>(const Fixed &rhs) const;
	bool	operator<(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;

	Fixed	operator+(const Fixed &rhs) const;
	Fixed	operator-(const Fixed &rhs) const;
	Fixed	operator*(const Fixed &rhs) const;
	Fixed	operator/(const Fixed &rhs) const;

	Fixed	&operator++(); //++i
	Fixed	operator++(int); //i++
	Fixed	&operator--();//--i
	Fixed	operator--(int);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;

	static Fixed	&min(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static Fixed	&max(Fixed &f1, Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &f);

#endif

