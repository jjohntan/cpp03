/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:46:19 by jetan             #+#    #+#             */
/*   Updated: 2025/04/21 16:52:28 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	// std::cout << "=== Orthodox Canonical Form ====" << std::endl;
	// ClapTrap a;
	// ClapTrap b(a);
	// ClapTrap c;
	//
	// c = b;
	std::cout << std::endl << "========== ClapTrap ============" << std::endl;
	ClapTrap obj("a");
	obj.attack("b");
	obj.takeDamage(3);
	obj.beRepaired(2);

	// for(int i = 0; i < 10; i++)//burn energy
	// {
	// 	obj.attack("burn");
	// }
	//
	// obj.attack("noleft");//no energy left
	//
	// obj.takeDamage(100);//take fatal damage
	//
	// obj.beRepaired(10);//try to act while dead
	// obj.attack("stilldead");
}
