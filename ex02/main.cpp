/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:46:19 by jetan             #+#    #+#             */
/*   Updated: 2025/04/25 17:06:27 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "===== Orthodox Canonical Form ======" << std::endl;
	ClapTrap DC;
	ClapTrap PC("plant");
	ClapTrap CC(PC);
	ClapTrap CAO;
	
	CAO = CC;
	
	std::cout << CC.getName() << std::endl;
	std::cout << CC.getHitPoints() << std::endl;
	std::cout << CC.getEnergyPoints() << std::endl;
	std::cout << CC.getAttackDamage() << std::endl;	
	std::cout << "========== ClapTrap ============" << std::endl;
	FragTrap a("plant");
	a.attack("zombie");
	a.takeDamage(3);
	a.beRepaired(2);
	a.highFivesGuys();
}
