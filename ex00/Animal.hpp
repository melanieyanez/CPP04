/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:31 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 17:36:01 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &src);
		Animal(const std::string type);
		virtual ~Animal();

		Animal &operator=(const Animal &rhs);
		
		std::string 		getType(void) const;
		virtual void 		makeSound(void) const;
		
	protected:
		std::string _type;
};

#endif