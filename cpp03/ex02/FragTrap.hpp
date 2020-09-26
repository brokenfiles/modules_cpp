/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:48:24 by louis             #+#    #+#             */
/*   Updated: 2020/08/01 14:48:24 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_FRAGTRAP_HPP
#define MODULES_CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

	FragTrap(const FragTrap &);

	FragTrap &operator=(const FragTrap &);

	FragTrap(const std::string &name);

	~FragTrap();

	void vaulthunter_dot_exe(const std::string &target);
};


#endif //MODULES_CPP_FRAGTRAP_HPP
