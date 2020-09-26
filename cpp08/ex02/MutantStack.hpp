/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:46:03 by louis             #+#    #+#             */
/*   Updated: 2020/08/17 12:46:03 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_CPP_MUTANTSTACK_HPP
#define MODULE_CPP_MUTANTSTACK_HPP

#include <stack>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>()
	{};

	~MutantStack()
	{};

	MutantStack &operator=(const MutantStack &mutantStack)
	{ this->c = mutantStack.c; };

	MutantStack(const MutantStack &mutantStack) : std::stack<T>(mutantStack)
	{ *this = mutantStack; };

	typedef typename std::deque<T>::iterator        iterator;
	typedef typename std::deque<T>::const_iterator  const_iterator;

	iterator begin()
	{ return (this->c.begin()); }

	iterator end()
	{ return (this->c.end()); }

	const_iterator begin() const
	{ return this->begin(); }

	const_iterator end() const
	{ return this->end(); }
};

#endif
