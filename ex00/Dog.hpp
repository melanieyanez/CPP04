/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:39 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/25 09:13:32 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(const Dog &src);
		virtual ~Dog();

		Dog &operator=(const Dog &rhs);

		virtual void makeSound(void) const;
};

#endif