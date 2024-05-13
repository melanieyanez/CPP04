/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:36 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/13 16:24:57 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal{
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