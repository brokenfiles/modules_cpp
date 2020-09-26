/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:49:18 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:49:18 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_SCAVTRAP_HPP
#define MODULES_CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap &operator=(const ScavTrap &);

	ScavTrap(const ScavTrap &);

	~ScavTrap();

	ScavTrap(const std::string &name);

	void challengeNewcomer(const std::string &target);
};


#endif //MODULES_CPP_SCAVTRAP_HPP
