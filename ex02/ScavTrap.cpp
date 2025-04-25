/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:16 by jetan             #+#    #+#             */
/*   Updated: 2025/04/25 17:43:38 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap Parameter constructor called" << std::endl;
	
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	
	if (this != &other)
	{
		this->Name_ = other.Name_;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints -= 1;
		std::cout << "ScavTrap " << Name_ << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name_ << " is now in Gate keeper mode" << std::endl;
}
