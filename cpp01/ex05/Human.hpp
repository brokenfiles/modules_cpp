/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:01:01 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:01:01 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
public:
	Human(void);
	~Human(void);
	Human(const Human &);
	Human &operator=(const Human &);
	std::string	identify(void);
	Brain		&getBrain(void);

private:
	Brain *brain;
};

#endif