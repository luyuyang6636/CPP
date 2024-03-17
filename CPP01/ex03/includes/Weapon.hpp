/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:55:08 by luyang            #+#    #+#             */
/*   Updated: 2024/03/15 18:28:24 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "Weapon.hpp"
# include <iostream>

class Weapon{
	
private:
	std::string	_type;

public:
	Weapon(std::string name);
	~Weapon(void);
	const std::string	&getType(void);
	void	setType(std::string newType);
};

#endif
