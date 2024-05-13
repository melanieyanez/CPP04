/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:59:45 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/08 15:20:39 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}
		
WrongAnimal::WrongAnimal(const std::string type) : _type (type){
	std::cout << "WrongAnimal constructor called: " << type << std::endl;
	
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal 	&WrongAnimal::operator=(const WrongAnimal &rhs){
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}
		
std::string 		WrongAnimal::getType(void) const{
	return this->_type;
}

void 		WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal makes a generic sound." << std::endl;
}