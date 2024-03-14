/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:55:08 by luyang            #+#    #+#             */
/*   Updated: 2024/03/14 23:04:05 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "Weapon.hpp"
# include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(void);
	~Weapon(void);
	const std::string	&getType(void);
	void	setType(std::string newType);
};

#endif
