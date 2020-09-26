/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:14 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:14 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_CPP_ENEMY_HPP
#define MODULES_CPP_ENEMY_HPP

#include <string>

class Enemy
{
private:
	int hp;
	std::string type;
	bool alive;
public:

	Enemy(int hp, std::string const &type);

	Enemy(const Enemy &enemy);

	virtual ~Enemy();

	Enemy &operator=(const Enemy &enemy);

public:

	int getHp() const;

	bool isAlive() const;

	void setHp(int hp);

	void setType(std::string type);

	std::string getType() const;

	virtual void takeDamage(int damage);

};


#endif //MODULES_CPP_ENEMY_HPP
