/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:15:42 by jetan             #+#    #+#             */
/*   Updated: 2025/04/24 17:39:13 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string Name_;
		unsigned int HitPoints;//representing the health of the ClapTrap
		int EnergyPoints;
		int AttackDamage;
	public:
		ClapTrap();//Default constructor
		ClapTrap(std::string name);//constructor
		ClapTrap(const ClapTrap &other);//Copy constructor
		ClapTrap &operator=(const ClapTrap &other);//Copy assignment operator
		~ClapTrap();//Destructor
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//getter function
		// std::string getName( void ) const;//debug
		// int getHitPoints( void ) const;//debug
		// int getEnergyPoints( void ) const;//debug
		// int getAttackDamage( void ) const;//debug
};



#endif
