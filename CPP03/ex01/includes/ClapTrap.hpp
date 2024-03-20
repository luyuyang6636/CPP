/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:01:30 by luyang            #+#    #+#             */
/*   Updated: 2024/03/20 01:18:56 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int		_hitPoints; //health
	int		_energyPoints;
	int		_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap( ClapTrap &f);
	ClapTrap	&operator=(ClapTrap const &rhs);
	~ClapTrap();

	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	&getName(void);
	int		&getHealth(void);
	int		&getEnergy(void);
	int		&getDamage(void);
	void		setName(std::string name);
	void		setHealth(int hitPoints);
	void		setEnergy(int energyPoints);
	void		setDamage(int attackDamage);
};

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap2);

#endif
