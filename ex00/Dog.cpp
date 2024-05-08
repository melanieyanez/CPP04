/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:19:26 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/08 17:40:26 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Default Dog Constructor called" << std::endl;
}
		
Dog::Dog(const Dog &src) : Animal(src){
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs){
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

void Dog::makeSound(void) const{
	std::cout << "Woof!" << std::endl;
}