/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:22:21 by myanez-p          #+#    #+#             */
/*   Updated: 2024/05/13 16:23:38 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal(const std::string type);
		virtual ~AAnimal();

		AAnimal &operator=(const AAnimal &rhs);
		
		std::string 		getType(void) const;
		virtual void 		makeSound(void) const = 0;
		
	protected:
		std::string _type;
};

#endif