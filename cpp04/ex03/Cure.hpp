/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:01:00 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 11:01:00 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_CURE_HPP
#define MODULE_CPP_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	~Cure();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif //MODULE_CPP_CURE_HPP
