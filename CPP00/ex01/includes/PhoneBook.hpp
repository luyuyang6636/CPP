/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:04:31 by luyang            #+#    #+#             */
/*   Updated: 2024/03/07 00:33:04 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONE_BOOK_HPP

# include "../includes/Contact.hpp"

class PhoneBook
{
private:
	Contact	_contacts[8];

public:
	PhoneBook();
	~PhoneBook();
	void	title(void) const;
	void	addContact(void);
	void	searchContact(void) const;
	void	printContact(void) const;
	int	readIndex(void) const;
};

#endif