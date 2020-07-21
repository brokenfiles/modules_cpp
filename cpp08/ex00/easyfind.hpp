#include <list>

template <typename T>
int easyfind(T list, int value) {
	std::list<int>::const_iterator iterator_begin = list.begin();
	std::list<int>::const_iterator iterator_end = list.end();
	int index = 0;
	while (iterator_begin != iterator_end) {
		if (*iterator_begin == value) {
			return (index);
		}
		index++;
		iterator_begin++;
	}
	if (iterator_begin != iterator_end) {
		return (index);
	}
	throw std::exception();
}