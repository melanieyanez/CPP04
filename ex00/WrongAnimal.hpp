/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:59:48 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 17:49:05 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal(const std::string type);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &rhs);
		
		std::string 		getType(void) const;
		void 				makeSound(void) const;
		
	protected:
		std::string _type;
};

#endif