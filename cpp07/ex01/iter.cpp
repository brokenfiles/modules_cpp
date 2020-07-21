
#include <iostream>

template <typename T>
void iter(T * array, int length, void (*f)(T)) {
	for (int i = 0; i < length; ++i)
	{
		f(array[i]);
	}
}

template <typename T>
void print(T type) {
	std::cout << type << std::endl;
}

template <typename T>
void print_with_prefix(T type) {
	std::cout << "Prfix : " << type << std::endl;
}

int main(void) {
	int numbers[] = {22, 10, 2001, 17, 02, 2001};
	std::string strings[] = {"hi", "como", "esta"};
	iter(numbers, 6, print);
	iter(strings, 3, print_with_prefix);
}