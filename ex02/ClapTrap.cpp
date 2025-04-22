/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:13:50 by jetan             #+#    #+#             */
/*   Updated: 2025/04/22 16:48:43 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()//Default constructor
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name_(name), HitPoints(10)
, EnergyPoints(10), AttackDamage(0)//constructor
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)//Copy constructor
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;

	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)//Copy assignment operator
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		this->Name_ = other.Name_;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()//Destructor
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints -= 1;
		std::cout << "ClapTrap " << Name_ << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
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
