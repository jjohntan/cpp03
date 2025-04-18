/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:08:57 by jetan             #+#    #+#             */
/*   Updated: 2025/04/18 16:50:37 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

//Derived class
class ScavTrap: public ClapTrap
{
	private:

	public:
		ScavTrap();//Default constructor
		ScavTrap(std::string name);//Param constructor
		ScavTrap(const ScavTrap &other);//Copy constructor
		ScavTrap &operator=(const ScavTrap &other);//Copy assignment operator
		~ScavTrap();//Destructor
		void guardGate();
}

#endif
