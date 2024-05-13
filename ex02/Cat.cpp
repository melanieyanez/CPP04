/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:33 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/13 16:25:15 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
	std::cout << "Default Cat Constructor called" << std::endl;
	this->_brain = new Brain;
}
		
Cat::Cat(const Cat &src) : AAnimal(src){
	std::cout << "Cat Copy constructor called" << std::endl;
	if (src.getBrain())
		this->_brain = new Brain(*src.getBrain());
	else
		this->_brain = nullptr;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &rhs){
	if (this != &rhs){
		AAnimal::operator=(rhs);
		delete this->_brain;
		if (rhs.getBrain())
			this->_brain = new Brain(*rhs.getBrain());
		else
			this->_brain = nullptr;
	}
	return *this;
}

void Cat::makeSound(void) const{
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const{
	return this->_brain;
}