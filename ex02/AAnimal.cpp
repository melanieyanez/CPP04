/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:22:12 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/13 16:24:30 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src){
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}
		
AAnimal::AAnimal(const std::string type) : _type (type){
	std::cout << "AAnimal constructor called: " << type << std::endl;
	
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal 	&AAnimal::operator=(const AAnimal &rhs){
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}
		
std::string 		AAnimal::getType(void) const{
	return this->_type;
}
