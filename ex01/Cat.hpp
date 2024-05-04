/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:36 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 18:42:22 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat &src);
		virtual ~Cat();

		Cat &operator=(const Cat &rhs);

		virtual void makeSound(void) const;
		Brain 		*getBrain(void) const;
	
	private:
		Brain *_brain;

};

#endif