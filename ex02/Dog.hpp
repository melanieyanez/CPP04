/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:39 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/13 16:25:01 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal{
	
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