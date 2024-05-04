/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:33 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 17:19:06 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Default Cat Constructor called" << std::endl;
}
		
Cat::Cat(const Cat &src){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs){
	this->_type = rhs.getType();
	return *this;
}

void Cat::makeSound(void) const{
	std::cout << "Meow!" << std::endl;
}