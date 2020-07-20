//
// Created by Louis Laurent on 20/07/2020.
//

#include "Array.hpp"

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->data = new T[n];
	this->size = n;
	for (unsigned int i = 0; i < n; ++i)
	{
		this->data[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array &array)
{
	*this = array;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &array)
{
	delete [] this->data;
	this->data = new T[array.size];
	this->size = array.size;
	for (int i = 0; i < array.size; ++i)
	{
		this->data[i] = array.data[i];
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](int n)
{
	if (n < 0 || n > size - 1) {
		throw OutOfBoundException();
	}
	return (this->data[n]);
}

template<typename T>
Array<T>::~Array()
{
	delete [] this->data;
}

template<typename T>
int Array<T>::getSize()
{
	return this->size;
}

template<typename T>
const char *Array<T>::OutOfBoundException::what() const throw()
{
	return "The index is either negative or greater than or equal to the size of the array.";
}
