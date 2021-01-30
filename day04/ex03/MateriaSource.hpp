//
// Created by Мария Корогодова on 28.01.2021.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource &operator= (MateriaSource const &copy);
};


#endif //EX03_MATERIASOURCE_HPP
