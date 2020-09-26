/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:56:10 by louis             #+#    #+#             */
/*   Updated: 2020/08/03 10:56:10 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"

Enemy::~Enemy()
{
	alive = false;
}

int Enemy::getHp() const
{
	return hp;
}

void Enemy::setHp(int newHp)
{
	this->hp = newHp;
}

void Enemy::setType(std::string newType)
{
	this->type = newType;
}

std::string Enemy::getType() const
{
	return this->type;
}

Enemy &Enemy::operator=(const Enemy &enemy)
{
	setHp(enemy.getHp());
	setType(enemy.getType());
	return *this;
}

Enemy::Enemy(const Enemy &enemy)
{
	*this = enemy;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0) {
		return ;
	}
	if (this->hp <= damage) {
		this->hp = 0;
	} else {
		this->hp -= damage;
	}
}

Enemy::Enemy(int hp, std::string const &type): hp(hp), type(type)
{
	this->alive = true;
}

bool Enemy::isAlive() const
{
	return alive;
}
