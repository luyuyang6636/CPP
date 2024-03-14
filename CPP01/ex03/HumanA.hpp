/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:58:03 by luyang            #+#    #+#             */
/*   Updated: 2024/03/14 23:04:16 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "iostream"
#include "Weapon.hpp"

class HumanA{
private:
	std::string	_name;
	Weapon		_weapon;

public:
	HumanA(Weapon w);
	~HumanA(void);
	void	attack();
};

#endif
