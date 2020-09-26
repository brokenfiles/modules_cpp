/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:39:28 by louis             #+#    #+#             */
/*   Updated: 2020/08/17 12:39:28 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_SPAN_HPP
#define MODULE_CPP_SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
	std::vector<int> _storage;
	unsigned int _size;
public:
	Span(unsigned int n);
	Span(const Span &span);
	Span &operator=(const Span &);
	~Span();
	void addNumber(int n);
	size_t shortestSpan() const;
	size_t longestSpan() const;
	const std::vector<int> &getStorage() const;
	unsigned int getSize() const;
	class NotEnoughNumbersException : public std::exception
	{
		const char *what() const throw();
	};
	class OutOfBoundsException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif //MODULE_CPP_SPAN_HPP
