/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:33 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/08 17:44:50 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Default Cat Constructor called" << std::endl;
	this->_brain = new Brain;
}
		
Cat::Cat(const Cat &src) : Animal(src){
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
		Animal::operator=(rhs);
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