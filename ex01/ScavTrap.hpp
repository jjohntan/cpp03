/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:08:57 by jetan             #+#    #+#             */
/*   Updated: 2025/04/26 16:41:16 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

//Derived class
class ScavTrap: public ClapTrap
{
	private:

	public:
		ScavTrap();//Default constructor
		ScavTrap(std::string name);//Parameter constructor
		ScavTrap(const ScavTrap &other);//Copy constructor
		ScavTrap &operator=(const ScavTrap &other);//Copy assignment operator
		~ScavTrap();//Destructor
		void attack(const std::string& target);
		void guardGate();
};

#endif
