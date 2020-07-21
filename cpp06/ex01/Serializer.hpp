//
// Created by Louis Laurent on 20/07/2020.
//

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
