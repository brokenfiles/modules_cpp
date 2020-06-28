//
// Created by Louis Laurent on 28/06/2020.
//

#ifndef MODULE_CPP_MATERIASOURCE_HPP
#define MODULE_CPP_MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_known_materials[4];
	int _count;

	bool isMaterialKnown(std::string const &type) const;

public:
	MateriaSource();

	MateriaSource(const MateriaSource &materiaSource);

	virtual ~MateriaSource();

	MateriaSource &operator=(const MateriaSource &materiaSource);

	void learnMateria(AMateria *materia);

	AMateria *createMateria(std::string const &type);
};


#endif //MODULE_CPP_MATERIASOURCE_HPP
