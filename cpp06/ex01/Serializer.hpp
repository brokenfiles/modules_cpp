/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 13:30:03 by louis             #+#    #+#             */
/*   Updated: 2020/08/07 13:30:03 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_SERIALIZER_HPP
#define MODULE_CPP_SERIALIZER_HPP

#include <iostream>

struct Data
{
	std::string s1, s2;
	int n;
};

class Serializer
{
private:
	Data *data;

	size_t random_number(size_t min, size_t max);

	std::string randomString(size_t len);

public:

	Serializer();

	~Serializer();

	Serializer &operator=(const Serializer &);

	Serializer(const Serializer &serializer);

	Data *getData();

	void *serialize(void);

	Data *deserialize(void *raw);
};


#endif //MODULE_CPP_SERIALIZER_HPP
