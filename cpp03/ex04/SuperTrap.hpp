/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:50:07 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:50:07 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_SUPERTRAP_HPP
#define MODULES_CPP_SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(const SuperTrap &);

	SuperTrap &operator=(const SuperTrap &);

	SuperTrap(const std::string &name);

	~SuperTrap();

	void rangedAttack(const std::string &target);

	void meleeAttack(const std::string &target);
};


#endif //MODULES_CPP_SUPERTRAP_HPP
