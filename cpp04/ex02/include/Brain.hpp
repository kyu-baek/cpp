/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:24:28 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/16 18:05:27 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
private:
	std::string _ideas[100];
public:
	Brain(void);
	Brain(const Brain &brain);
	Brain& operator=(const Brain &brain);
	~Brain(void);

	const std::string *getIdeas(void);
	void setIdeas(const std::string *ideas);
	void	insideBrain(void);
};

#endif