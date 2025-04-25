/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:46:19 by jetan             #+#    #+#             */
/*   Updated: 2025/04/25 19:57:28 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "===== Orthodox Canonical Form ======" << std::endl;
	ScavTrap DC;
	ScavTrap PC("plant");
	ScavTrap CC(PC);
	ScavTrap CAO;
	
	CAO = CC;
	
	// std::cout << CC.getName() << std::endl;
	// std::cout << CC.getHitPoints() << std::endl;
	// std::cout << CC.getEnergyPoints() << std::endl;
	// std::cout << CC.getAttackDamage() << std::endl;	
	std::cout << "========== ClapTrap ============" << std::endl;
	ScavTrap a("plant");
	a.attack("zombie");
	a.takeDamage(3);
	a.beRepaired(2);
	a.guardGate();
	
	// std::cout << "Name: " << a.getName() << std::endl;
	// std::cout << "HitPoints: " << a.getHitPoints() << std::endl;
	// std::cout << "EnergyPoints: " << a.getEnergyPoints() << std::endl;
	// std::cout << "AttackDamage: " << a.getAttackDamage() << std::endl;	
}
