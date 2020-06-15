#include "Brain.hpp"

std::string Brain::identify()
{
	std::stringstream stream;
	stream << "0x" << std::uppercase << std::hex << uintptr_t(this);
	return (stream.str());
}