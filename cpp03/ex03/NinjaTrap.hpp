/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:49:11 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:49:11 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_NINJATRAP_HPP
#define MODULES_CPP_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(const NinjaTrap &);

	NinjaTrap &operator=(const NinjaTrap &);

	~NinjaTrap();

	NinjaTrap(const std::string &name);

	void ninjaShoebox(FragTrap &clapTrap);

	void ninjaShoebox(ScavTrap &clapTrap);

	void ninjaShoebox(NinjaTrap &clapTrap);
};


#endif //MODULES_CPP_NINJATRAP_HPP
