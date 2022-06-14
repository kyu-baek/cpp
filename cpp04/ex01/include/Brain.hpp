/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:24:28 by kbaek             #+#    #+#             */
/*   Updated: 2022/06/14 21:39:13 by kbaek            ###   ########.fr       */
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

	std::string const *getIdeas(void) const;
	void setIdeas(std::string const *ideas);
	void	insideBrain(void);
};

#endif