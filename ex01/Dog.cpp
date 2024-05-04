/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:19:26 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 18:37:32 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Default Dog Constructor called" << std::endl;
	this->_brain = new Brain();
}
		
Dog::Dog(const Dog &src){
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &rhs){
	this->_type = rhs.getType();
	*(this ->_brain) = *(rhs.getBrain());
	return *this;
}

void Dog::makeSound(void) const{
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const{
	return this->_brain;
}