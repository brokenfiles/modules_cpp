#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
public:
	Pony(std::string name, std::string color, float speed);

	~Pony();

	void run(void);

	void eat(std::string food);

	void setSpeed(float newSpeed);
private:
	std::string name, color;
	float speed;
};

#endif