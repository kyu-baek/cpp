/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:24:28 by kbaek             #+#    #+#             */
/*   Updated: 2022/05/28 22:36:23 by kbaek            ###   ########.fr       */
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

	std::string getIdeas(void) const;
	void setIdeas(std::string ideas);

};

#endif