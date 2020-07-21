//
// Created by Louis Laurent on 25/06/2020.
//

#ifndef MODULES_CPP_ENEMY_HPP
#define MODULES_CPP_ENEMY_HPP

#include <string>

class Enemy
{
private:
	int hp;
	std::string type;
public:

	Enemy(int hp, std::string const &type);

	Enemy(const Enemy &enemy);

	virtual ~Enemy();

	Enemy &operator=(const Enemy &enemy);

public:

	int getHp() const;

	void setHp(int hp);

	void setType(std::string type);

	std::string getType() const;

	virtual void takeDamage(int damage);

};


#endif //MODULES_CPP_ENEMY_HPP
