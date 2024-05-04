/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:39 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 18:42:37 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
	
	public:
		Dog();
		Dog(const Dog &src);
		virtual ~Dog();

		Dog &operator=(const Dog &rhs);

		virtual void makeSound(void) const;
		Brain 		*getBrain(void) const;

	private:
		Brain *_brain;
};

#endif