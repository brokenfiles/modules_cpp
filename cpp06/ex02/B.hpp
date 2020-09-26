/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:00:16 by louis             #+#    #+#             */
/*   Updated: 2020/08/14 12:00:16 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_B_HPP
#define MODULE_CPP_B_HPP

#include "Base.hpp"

class B : public Base
{
public:
	B();
	~B();
	B &operator=(const B &);
	B(const B &);
};

#endif
