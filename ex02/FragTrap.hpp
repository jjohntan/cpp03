/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:01:04 by jetan             #+#    #+#             */
/*   Updated: 2025/04/22 18:07:50 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
	public:
		FragTrap();//Default constructor
		FragTrap(std::string name);//Parameter constructor
		FragTrap(const FragTrap &other);//Copy constructor
		FragTrap &operator=(const FragTrap &other);//Copy assignment operator
		~FragTrap();//Destructor
		void highFivesGuys(void);
};

#endif
