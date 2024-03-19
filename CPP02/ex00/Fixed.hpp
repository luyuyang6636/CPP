/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:49:23 by luyang            #+#    #+#             */
/*   Updated: 2024/03/18 23:00:53 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int	_number;
	static const int	_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed	&operator=(const Fixed &rhs);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
