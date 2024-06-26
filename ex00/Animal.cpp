/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:28 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 09:14:50 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}
		
Animal::Animal(const std::string type) : _type (type){
	std::cout << "Animal constructor called: " << type << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs){
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

std::string	Animal::getType(void) const{
	return this->_type;
}

void	Animal::makeSound(void) const{
	std::cout << "Animal makes a generic sound." << std::endl;
}