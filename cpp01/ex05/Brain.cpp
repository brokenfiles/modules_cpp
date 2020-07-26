/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:00:50 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:00:50 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify()
{
	std::stringstream stream;
	stream << "0x" << std::uppercase << std::hex << uintptr_t(this);
	return (stream.str());
}