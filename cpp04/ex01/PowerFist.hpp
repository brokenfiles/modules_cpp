/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:33 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:33 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_POWERFIST_HPP
#define MODULES_CPP_POWERFIST_HPP


#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();

	virtual ~PowerFist();

	virtual void attack() const;

	PowerFist &operator=(const PowerFist &);

	PowerFist(const PowerFist &);
};


#endif //MODULES_CPP_POWERFIST_HPP
