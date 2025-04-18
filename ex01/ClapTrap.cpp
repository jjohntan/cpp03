/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:13:50 by jetan             #+#    #+#             */
/*   Updated: 2025/04/15 13:45:42 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()//Default constructor
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name(name), HitPoints(10)
, EnergyPoints(10), AttackDamage(0)//constructor
{
	std::cout << "Constructor called" << std::endl;
	std::cout << Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)//Copy constructor
{
	std::cout << "Copy constructor called" << std::endl;

	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)//Copy assignment operator
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()//Destructor
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints -= 1;
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage called " << HitPoints << std::endl;

	HitPoints = amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired called " << HitPoints << std::endl;
		
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints -= 1;
		HitPoints = amount;
	}
}
