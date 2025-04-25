/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:46:19 by jetan             #+#    #+#             */
/*   Updated: 2025/04/25 17:11:43 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "===== Orthodox Canonical Form ======" << std::endl;
	ClapTrap DC;
	ClapTrap PC("plant");
	ClapTrap CC(PC);
	ClapTrap CAO;
	
	CAO = CC;
	
	// std::cout << CC.getName() << std::endl;
	// std::cout << CC.getHitPoints() << std::endl;
	// std::cout << CC.getEnergyPoints() << std::endl;
	// std::cout << CC.getAttackDamage() << std::endl;	
	std::cout << "========== ClapTrap ============" << std::endl;
	ClapTrap a("plant");
	a.attack("zombie");
	a.takeDamage(3);
	a.beRepaired(2);

	// for(int i = 0; i < 10; i++)//burn energy
	// {
	// 	a.attack("burn");
	// }
	
	// a.attack("noleft");//no energy left
	
	// a.takeDamage(100);//take fatal damage
	
	// a.beRepaired(10);//try to act while dead
	// a.attack("stilldead");
	
	// std::cout << "Name: " << a.getName() << std::endl;
	// std::cout << "HitPoints: " << a.getHitPoints() << std::endl;
	// std::cout << "EnergyPoints: " << a.getEnergyPoints() << std::endl;
	// std::cout << "AttackDamage: " << a.getAttackDamage() << std::endl;	
}
