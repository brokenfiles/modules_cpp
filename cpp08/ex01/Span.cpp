/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:39:25 by louis             #+#    #+#             */
/*   Updated: 2020/08/17 12:39:25 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int n)
{
	if ((int)n < 0) {
		throw std::exception();
	}
	this->_size = n;
}

void Span::addNumber(int n)
{
	if (this->_storage.size() >= this->_size) {
		throw OutOfBoundsException();
	}
	this->_storage.push_back(n);
}

size_t Span::shortestSpan() const
{
	size_t store_size = this->_storage.size();
	if (store_size <= 1) {
		throw NotEnoughNumbersException();
	}
	std::vector<int> sorted = this->_storage;
	std::sort(sorted.begin(), sorted.end());
	std::vector<int>::iterator begin = sorted.begin();
	std::vector<int>::iterator end   = sorted.end() - 1;
	int span = -1, tmp;
	while (end != begin) {
		tmp = abs(*begin - *end);
		if ((tmp < span || span == -1) && begin != end) {
			span = tmp;
		}
		end--;
	}
	return (span);
}

size_t Span::longestSpan() const
{
	if (this->_size <= 1) {
		throw NotEnoughNumbersException();
	}
	int max_element = * std::max_element(this->_storage.begin(), this->_storage.end());
	int min_element = * std::min_element(this->_storage.begin(), this->_storage.end());
	return (max_element - min_element);
}

unsigned int Span::getSize() const
{
	return _size;
}

const std::vector<int> &Span::getStorage() const
{
	return _storage;
}

Span::~Span()
{
	this->_storage.clear();
	this->_size = 0;
}

Span &Span::operator=(const Span &span)
{
	this->_storage = span.getStorage();
	this->_size = span.getSize();
	return (*this);
}

Span::Span(const Span &span)
{
	(*this) = span;
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return "Not enough numbers";
}

const char *Span::OutOfBoundsException::what() const throw()
{
	return "You tried to add to much numbers";
}
