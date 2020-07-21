//
// Created by Louis Laurent on 25/06/2020.
//

#include <iostream>
#include "Enemy.hpp"

Enemy::~Enemy()
{}

int Enemy::getHp() const
{
	return hp;
}

void Enemy::setHp(int hp)
{
	Enemy::hp = hp;
}

void Enemy::setType(std::string type)
{
	this->type = type;
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
	std::cout << "Enemy " << getType() << " takes " << damage << " damages." << std::endl;
	if (this->hp <= damage) {
		this->hp = 0;
		std::cout << "Enemy " << getType() << " dies." << std::endl;
	} else {
		this->hp -= damage;
	}
}

Enemy::Enemy(int hp, std::string const &type): hp(hp), type(type)
{}
