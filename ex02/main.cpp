/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:42 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/20 15:50:56 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){

	std::cout << "*************************************************************************" << std::endl;
	std::cout << "*Testing Abstract and Non-Abstract Classes*" << std::endl << std::endl;
	
	//std::cout << "*Attempt to statically instantiate AAnimal" << std::endl;
	//AAnimal abstractAnimal;

	std::cout << "*Dynamic Instantiation of Derived Classes from AAnimal*" << std::endl;
	const AAnimal *i = new Cat();
	std::cout << "***" << std::endl;
	const AAnimal *j = new Dog();

	std::cout << "*Static Instantiation of Non-Abstract Class Animal" << std::endl;
	Animal concreteAnimal;

	std::cout <<  std::endl <<  "*Destruction of Dynamically Created Instances*" << std::endl;

	delete j;
	std::cout << "***" << std::endl;
	delete i;

	std::cout << std::endl << "*************************************************************************" << std::endl;
	std::cout << "*Testing Instantiation and Pure Virtual Method Calls on Derived Classes*" << std::endl << std::endl;
	std::cout << "*Instantiating Multiple Animals*" << std::endl;
	
	AAnimal *animals[10];
	for (int i = 0; i < 5; i++){
		animals[i] = new Cat;
		std::cout << "***" << std::endl;
	}
	for (int i = 5; i < 10; i++){
		animals[i] = new Dog;
		std::cout << "***" << std::endl;
	}
	
	std::cout << std::endl << "*Method tests*" << std::endl;
	for (int i = 0; i < 10; i ++)
		animals[i]->makeSound();

	std::cout << std::endl << "*Destruction*" << std::endl;
	for (int i = 0; i < 10; i ++){
		delete animals[i];
		std::cout << "***" << std::endl;
	}

	std::cout << std::endl << "*************************************************************************" << std::endl;
	std::cout << "*Testing Non-Implementation of Pure Virtual Methods*" << std::endl << std::endl;
	
	std::cout <<  std::endl <<  "*Instantiation of derived classes*" << std::endl;
	std::cout <<  std::endl <<  "*Instantiating a Cat, which properly implements all pure virtual methods*" << std::endl;
	AAnimal	*Crookshanks = new Cat();
	// std::cout << "*Attempt to instantiate MuteCat, which does not implement the makeSound method.*" << std::endl;
	//AAnimal *Salem = new MuteCat();

	std::cout <<  std::endl <<  "*Destruction*" << std::endl;
	delete Crookshanks;
	return 0;
}