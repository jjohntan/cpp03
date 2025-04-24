/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:46:19 by jetan             #+#    #+#             */
/*   Updated: 2025/04/24 18:22:41 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// std::cout << "===== Orthodox Canonical Form ======" << std::endl;
	// ScavTrap a("plant");
	// ScavTrap b(a);
	// ScavTrap c;
	
	// c = b;
	
	// std::cout << b.getName() << std::endl;
	// std::cout << b.getHitPoints() << std::endl;
	// std::cout << b.getEnergyPoints() << std::endl;
	// std::cout << b.getAttackDamage() << std::endl;
	std::cout << "========== ClapTrap ============" << std::endl;
	ScavTrap a("plant");
	a.attack("zombie");
	a.takeDamage(3);
	a.beRepaired(2);
	a.guardGate();
}
