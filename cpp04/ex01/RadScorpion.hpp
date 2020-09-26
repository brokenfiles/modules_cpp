/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:40 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:40 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_RADSCORPION_HPP
#define MODULE_CPP_RADSCORPION_HPP


#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();

	virtual ~RadScorpion();

	RadScorpion &operator=(const RadScorpion &);

	RadScorpion(const RadScorpion &);
};


#endif //MODULE_CPP_RADSCORPION_HPP
