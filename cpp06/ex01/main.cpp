#include "Serializer.hpp"

int main() {
	Serializer serializer;
	void * ptr = serializer.serialize();
	Data * data = serializer.deserialize(ptr);
	std::cout << "N  = " <<  data->n << std::endl;
	std::cout << "S1 = " <<  data->s1 << std::endl;
	std::cout << "S2 = " <<  data->s2 << std::endl;
	delete data;
}