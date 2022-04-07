/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:10:44 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/07 17:31:41 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include <iostream>
# include <string>

# define SIZE 8

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
};

class PhoneBook
{
private:
	Contact	_contacts[SIZE];
	int		_count;
	
public:
	void	add(void);
	void	_print_phonebook(void) const;
	void	search(void) const;
	PhoneBook();
	~PhoneBook();
};

#endif
