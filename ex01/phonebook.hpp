/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:10:44 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/05 22:07:24 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include <iostream>
# include <string>

# define SIZE 3

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	void		set_input(void);
	std::string	get_input(std::string status);
	void		get_phonebook(int i) const;

	// std::string	get_first_name(void) const;
	// std::string	get_last_name(void) const;
	// std::string	get_nickname(void) const;
	// std::string	get_phone_number(void) const;
	// std::string	get_darkest_secret(void) const;
	// void		display(void) const;
};

class PhoneBook
{
private:
	Contact	_contacts[SIZE];
	uint	_count;

	// bool	_valid_contacts_index(int index) const;
	// void	_set_contact(Contact *contact);
	// Contact *_get_contact(uint index) const;

	
public:
	void	add(void);
	void	_print_phonebook(void) const;
	void	search(void) const;
	PhoneBook();
	~PhoneBook();
};

#endif
