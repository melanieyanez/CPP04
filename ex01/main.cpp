/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:42 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 21:28:10 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){

	std::cout << "*************************************************************************" << std::endl;
	std::cout << "*Subject tests*" << std::endl << std::endl;
	std::cout << "*Instanciation*" << std::endl;
	
	const Animal *i = new Cat();
	std::cout << "***" << std::endl;
	const Animal *j = new Dog();

	std::cout <<  std::endl <<  "*Destruction*" << std::endl;

	delete j;
	std::cout << "***" << std::endl;
	delete i;

	std::cout << std::endl << "*************************************************************************" << std::endl;
	std::cout << "*Subject thorough tests*" << std::endl << std::endl;
	std::cout << "*Instanciation*" << std::endl;
	
	Animal *animals[10];
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
	std::cout << "*Brain tests*" << std::endl << std::endl;
	std::cout << "*Instanciation*" << std::endl;

	Dog *Hachiko = new Dog;
	std::cout << "***" << std::endl;
	Cat *Crookshanks = new Cat;

	std::cout << std::endl << "*Method tests*" << std::endl;
	Hachiko->makeSound();
	Crookshanks->makeSound();

	std::cout << std::endl << "*Ideas tests*" << std::endl;
	Hachiko->getBrain()->setIdeas(0, "I'm a dog!");
	std::cout << Hachiko->getBrain()->getIdeas(0) << std::endl;
	std::cout << "***" << std::endl;
	Crookshanks->getBrain()->setIdeas(0, "I hate you!");
	std::cout << Crookshanks->getBrain()->getIdeas(0) << std::endl;
	std::cout << "***" << std::endl;
	Cat *Salem(Crookshanks);
	std::cout << Salem->getBrain()->getIdeas(0) << std::endl;

	std::cout << std::endl << "*Destruction*" << std::endl;
	delete Hachiko;
	std::cout << "***" << std::endl;
	delete Crookshanks;
	
	return 0;
}