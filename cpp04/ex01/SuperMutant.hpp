/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:47 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:47 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_SUPERMUTANT_HPP
#define MODULE_CPP_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	virtual ~SuperMutant();

	SuperMutant();

	SuperMutant &operator=(const SuperMutant &);

	SuperMutant(const SuperMutant &);

	virtual void takeDamage(int damage);
};


#endif //MODULE_CPP_SUPERMUTANT_HPP
