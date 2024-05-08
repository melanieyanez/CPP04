/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:19:26 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/08 17:44:24 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Default Dog Constructor called" << std::endl;
	this->_brain = new Brain();
}
		
Dog::Dog(const Dog &src) : Animal(src){
	std::cout << "Dog Copy constructor called" << std::endl;
	if (src.getBrain())
		this->_brain = new Brain(*src.getBrain());
	else
		this->_brain = nullptr;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &rhs){
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

void Dog::makeSound(void) const{
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const{
	return this->_brain;
}