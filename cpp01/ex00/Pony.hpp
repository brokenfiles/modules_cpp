#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
public:
	float size, weight, endurance, speed;
	std::string name, color;

	void ponyOnTheStack(void);

	void ponyOnTheHeap(void);

	void jump(void);

	void sleep(float time);

	void eat(std::string food);

	void changeSpeed(float newSpeed);
};

#endif