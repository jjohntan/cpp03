/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:15:42 by jetan             #+#    #+#             */
/*   Updated: 2025/04/15 13:41:49 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int HitPoints;//representing the health of the ClapTrap
		int EnergyPoints;
		int AttackDamage;
	public:
		ClapTrap(std::string name);//Default constructor
		ClapTrap(const ClapTrap &other);//Copy constructor
		ClapTrap &operator=(const ClapTrap &other);//Copy assignment operator
		~ClapTrap();//Destructor
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};



#endif
