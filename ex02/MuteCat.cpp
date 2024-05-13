/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MuteCat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:33 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/13 16:29:51 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MuteCat.hpp"

MuteCat::MuteCat() : AAnimal("MuteCat"){
	std::cout << "Default MuteCat Constructor called" << std::endl;
	this->_brain = new Brain;
}
		
MuteCat::MuteCat(const MuteCat &src) : AAnimal(src){
	std::cout << "MuteCat Copy constructor called" << std::endl;
	if (src.getBrain())
		this->_brain = new Brain(*src.getBrain());
	else
		this->_brain = nullptr;
}

MuteCat::~MuteCat(){
	std::cout << "MuteCat Destructor called" << std::endl;
	delete this->_brain;
}

MuteCat &MuteCat::operator=(const MuteCat &rhs){
	if (this != &rhs){
		AAnimal::operator=(rhs);
		delete this->_brain;
		if (rhs.getBrain())
			this->_brain = new Brain(*rhs.getBrain());
		else
			this->_brain = nullptr;
	}
	return *this;
}

/*
void MuteCat::makeSound(void) const{
	std::cout << "Meow!" << std::endl;
}
*/

Brain *MuteCat::getBrain(void) const{
	return this->_brain;
}