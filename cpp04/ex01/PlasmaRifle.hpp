/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:26 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:26 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_PLASMARIFLE_HPP
#define MODULES_CPP_PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	virtual void attack() const;

	virtual ~PlasmaRifle();

	PlasmaRifle();

	PlasmaRifle &operator=(const PlasmaRifle &);

	PlasmaRifle(const PlasmaRifle &);
};


#endif //MODULES_CPP_PLASMARIFLE_HPP
