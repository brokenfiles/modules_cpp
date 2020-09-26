/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:49:55 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:49:55 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_SCAVTRAP_HPP
#define MODULES_CPP_SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const ScavTrap &);

	ScavTrap &operator=(const ScavTrap &);

	~ScavTrap();

	ScavTrap(const std::string &name);

	void challengeNewcomer(const std::string &target);
};


#endif //MODULES_CPP_SCAVTRAP_HPP
