/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:58:32 by luyang            #+#    #+#             */
/*   Updated: 2024/03/14 20:37:35 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {

private:
	std::string	_name;


public:
	void	announce(void);
	Zombie (void);
	Zombie (std::string name);
	~Zombie (void);

};


Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif