/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:21:27 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/04 19:14:00 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain{
	public:
		Brain();
		Brain(const Brain &src);
		~Brain();

		Brain &operator=(const Brain &rhs);

		std::string getIdeas(size_t index) const;
		void setIdeas(size_t index, std::string &idea);
	
	private:
		std::string _ideas[100];
	
};

#endif