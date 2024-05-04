/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:33 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 18:33:58 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Default Cat Constructor called" << std::endl;
	this->_brain = new Brain;
}
		
Cat::Cat(const Cat &src){
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain;
	*this = src;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &rhs){
	this->_type = rhs.getType();
	*(this ->_brain) = *(rhs.getBrain());
	return *this;
}

void Cat::makeSound(void) const{
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const{
	return this->_brain;
}