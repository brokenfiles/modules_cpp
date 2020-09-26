/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:00:11 by louis             #+#    #+#             */
/*   Updated: 2020/08/14 12:00:11 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_C_HPP
#define MODULE_CPP_C_HPP

#include "Base.hpp"

class C : public Base
{
public:
	C();
	~C();
	C &operator=(const C &);
	C(const C &);
};

#endif
