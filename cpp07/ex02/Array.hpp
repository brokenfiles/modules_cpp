/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 09:52:51 by louis             #+#    #+#             */
/*   Updated: 2020/08/15 09:52:51 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_ARRAY_HPP
#define MODULE_CPP_ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
private:
	T *_data;
	int _size;

public:
	Array(unsigned int n = 1)
	{
		this->_data = new T[n];
		this->_size = n;
		for (unsigned int i = 0; i < n; ++i)
		{
			this->_data[i] = 0;
		}
	}

	Array(const Array &array)
	{
		*this = array;
	}

	Array &operator=(const Array &array)
	{
		this->_data = new T[array._size];
		this->_size = array._size;
		for (int i = 0; i < array._size; ++i)
		{
			this->_data[i] = array._data[i];
		}
		return (*this);
	}

	T &operator[](int n)
	{
		if (n < 0 || n > this->_size - 1)
		{
			throw OutOfBoundException();
		}
		return (this->_data[n]);
	}

	virtual ~Array()
	{
		this->_size = 0;
		delete[] this->_data;
	}

	int size() const
	{
		return this->_size;
	}

	class OutOfBoundException : public std::exception
	{
		const char *what() const throw()
		{
			return "The index is either negative or greater than or equal to the size of the array.";
		}
	};
};

#endif
