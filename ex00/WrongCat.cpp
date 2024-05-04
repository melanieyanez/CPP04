/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:59:50 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 17:52:02 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "Default WrongCat Constructor called" << std::endl;
}
		
WrongCat::WrongCat(const WrongCat &src){
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs){
	this->_type = rhs.getType();
	return *this;
}

void WrongCat::makeSound(void) const{
	std::cout << "Meow!" << std::endl;
}