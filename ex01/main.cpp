/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:42 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 19:25:58 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){

	std::cout << "*************************************************************************" << std::endl;
	std::cout << "*Subject Tests*" << std::endl << std::endl;
	std::cout << "*Instanciation*" << std::endl;
	
	const Animal *i = new Cat();
	std::cout << "***" << std::endl;
	const Animal *j = new Dog();

	std::cout <<  std::endl <<  "*Destruction*" << std::endl;

	delete j;
	std::cout << "***" << std::endl;
	delete i;

	std::cout << std::endl << "*************************************************************************" << std::endl;
	std::cout << "*Thorough Tests*" << std::endl << std::endl;
	
	return 0;
}