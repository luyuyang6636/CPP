/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:20:38 by luyang            #+#    #+#             */
/*   Updated: 2024/03/17 23:57:01 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	struct _bundle
	{
		std::string	level;
		void	(Harl::*f)(void);
	};
	struct _bundle	bundle[4];

public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif

