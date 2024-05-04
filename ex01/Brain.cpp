/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:21:38 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 19:14:33 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "Brain.hpp"
	
	Brain::Brain(){
		std::cout << "Brain default constructor called" << std::endl;
	}
	
	Brain::Brain(const Brain &src){
		std::cout << "Brain copy constructor called" << std::endl;
		*this = src;
	}
	
	Brain::~Brain(){
		std::cout << "Brain destructor called" << std::endl;
	}

	Brain &Brain::operator=(const Brain &rhs){
		for (size_t i = 0; i < sizeof(_ideas) / sizeof(_ideas[0]); i++){
			this->_ideas[i] = rhs.getIdeas(i);
		}
		return *this;
	}
	
	std::string Brain::getIdeas(size_t index) const{
		if (index >= 0 && index < sizeof(_ideas) / sizeof(_ideas[0]))
			return this->_ideas[index];
		return (NULL);
	}

	void Brain::setIdeas(size_t index, std::string &idea){
		if (index >= 0 && index < sizeof(_ideas) / sizeof(_ideas[0]))
			this->_ideas[index] = idea;
	}
	
