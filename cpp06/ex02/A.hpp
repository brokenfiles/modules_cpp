/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 11:58:49 by louis             #+#    #+#             */
/*   Updated: 2020/08/14 11:58:49 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_A_HPP
#define MODULE_CPP_A_HPP

#include "Base.hpp"

class A : public Base
{
public:
	A();
	~A();
	A &operator=(const A &);
	A(const A &);
};

#endif
