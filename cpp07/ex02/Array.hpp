//
// Created by Louis Laurent on 20/07/2020.
//

#ifndef MODULE_CPP_ARRAY_HPP
#define MODULE_CPP_ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
private:
	T *data;
	int size;

public:
	Array(unsigned int n = 1);

	Array(const Array &array);

	Array &operator=(const Array &);

	T &operator[](int n);

	virtual ~Array();

	int getSize();

	class OutOfBoundException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif //MODULE_CPP_ARRAY_HPP
