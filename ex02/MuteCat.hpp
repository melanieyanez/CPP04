/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MuteCat.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:36 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/13 16:30:34 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTECAT_HPP
# define MUTECAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class MuteCat : public AAnimal{
	public:
		MuteCat();
		MuteCat(const MuteCat &src);
		virtual ~MuteCat();

		MuteCat &operator=(const MuteCat &rhs);

		//virtual void makeSound(void) const;
		Brain 		*getBrain(void) const;
	
	private:
		Brain *_brain;

};

#endif