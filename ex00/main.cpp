/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:42 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 09:09:49 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void){
	
	std::cout << "*************************************************************************" << std::endl;
	std::cout << "*Animal Tests*" << std::endl << std::endl;
	std::cout << "*Instantiations*" << std::endl;
	const	Animal* meta = new Animal();
	std::cout << "***" << std::endl;
	const	Animal* i = new Cat();
	std::cout << "***" << std::endl;
	const	Animal* j = new Dog();

	std::cout << std::endl << "*Type Tests*" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl; 
	std::cout << j->getType() << " " << std::endl;
	std::cout << std::endl << "*Sound Tests*" << std::endl;
	meta->makeSound();
	i->makeSound();
    j->makeSound();

	std::cout << std::endl << "*Destructor Tests*" << std::endl;
	delete meta;
	std::cout << "***" << std::endl;
	delete i;
	std::cout << "***" << std::endl;
	delete j;
	
	std::cout << std::endl << "*************************************************************************" << std::endl;
	std::cout << "*Wrong Animal Tests*" << std::endl << std::endl;
	std::cout << "*Instantiations*" << std::endl;
	const	WrongAnimal* wrongmeta = new WrongAnimal();
	std::cout << "***" << std::endl;
	const	WrongAnimal* wrongi = new WrongCat();

	std::cout << std::endl << "*Type Tests*" << std::endl;
	std::cout << wrongmeta->getType() << " " << std::endl;
	std::cout << wrongi->getType() << " " << std::endl; 
	
	std::cout << std::endl << "*Sound Tests*" << std::endl;
	wrongmeta->makeSound();
	wrongi->makeSound();

	std::cout << std::endl << "*Destructor Tests*" << std::endl;
	delete wrongmeta;
	std::cout << "***" << std::endl;
	delete wrongi;
	
	return 0;
}