/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:40:56 by luyang            #+#    #+#             */
/*   Updated: 2024/03/20 00:18:34 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//previous
Fixed::Fixed() : _number(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(copy.getRawBits());
}

Fixed::Fixed(const int integer)
{
//	std::cout << "Int constructor called" << std::endl;
	this->_number = (integer << Fixed::_bits);
}

Fixed::Fixed(const float floating)
{
//	std::cout << "Floating point constructor called" << std::endl;
	this->_number = std::roundf(floating * (1 << Fixed::_bits));
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
//	std::cout << "Assignment operator called" << std::endl;
	this->_number = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void	Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}
	
float	Fixed::toFloat(void) const
{
	return ((float)this->_number / (float)(1 << Fixed::_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_number >> Fixed::_bits);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
}

//comparison operators
bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->_number > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->_number < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_number >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_number <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->_number == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_number != rhs.getRawBits());
}

//Arithmetic operators
Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

//increment operators

Fixed	&Fixed::operator++() //++i
{
	this->_number++;
	return (*this);
}

Fixed	Fixed::operator++(int) //i++
{
	Fixed	tmp(*this);

	this->_number++;
	return (tmp);
}

Fixed	&Fixed::operator--()//--i
{
	this->_number--;
	return (*this);
}

Fixed	Fixed::operator--(int)//i--
{
	Fixed	tmp(*this);

	this->_number++;
	return (tmp);
}

//static member functions
Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f2);
	return (f1);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f2);
	return (f1);
}