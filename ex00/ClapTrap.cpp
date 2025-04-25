/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:13:50 by jetan             #+#    #+#             */
/*   Updated: 2025/04/25 17:54:30 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Name_("Default"), HitPoints(10)
, EnergyPoints(10), AttackDamage(0)//Default constructor
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name_(name), HitPoints(10)
, EnergyPoints(10), AttackDamage(0)//constructor
{
	std::cout << "Parameter constructor called" << std::endl;	
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
		this->Name_ = other.Name_;
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
		std::cout << "ClapTrap " << Name_ << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
	if (HitPoints >= amount)
	{
		HitPoints -= amount;
		std::cout << "ClapTrap " << Name_ << " takes " << amount << " points of damage!" << std::endl;//
	}
	else
	{
		HitPoints = 0;
		std::cout << "ClapTrap " << Name_ << " can’t do anything if it has no hit points or energy points left!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints -= 1;
		HitPoints += amount;
		std::cout << "ClapTrap " << Name_ << " repairs itself, it regains " << amount << " hit points!" << std::endl;
	}
}

//getter function
std::string ClapTrap::getName( void ) const { return this->Name_; }
int ClapTrap::getHitPoints( void ) const { return this->HitPoints; }
int ClapTrap::getEnergyPoints( void ) const { return this->EnergyPoints; }
int ClapTrap::getAttackDamage( void ) const { return this->AttackDamage; }
