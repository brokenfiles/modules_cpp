//
// Created by Louis Laurent on 21/07/2020.
//

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
	int shortestSpan();
	int longestSpan();
};


#endif //MODULE_CPP_SPAN_HPP
