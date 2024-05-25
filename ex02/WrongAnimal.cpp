/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:59:45 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 09:12:07 by myanez-p         ###   ########.fr       */
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

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs){
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}
		
std::string	WrongAnimal::getType(void) const{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal makes a generic sound." << std::endl;
}