/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:25:58 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 15:52:20 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.Class.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	    this->_source[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
    *this = src;
    for (int i = 0; i < 4; i++)
	{
        if (src._source[i])
            this->_source[i] = src._source[i]->clone();
        else
            this->_source[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->_source[i])
            delete this->_source[i];
}

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
		    if (this->_source[i])
				delete this->_source[i];
		for (int i = 0; i < 4; i++)
			if (rhs._source[i])
				this->_source[i] = rhs._source[i]->clone();
			else
				this->_source[i] = NULL;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
    {
        if (!this->_source[i])
        {
            this->_source[i] = m->clone();
			std::cout << "* learns: " << m->getType() << " *" << std::endl;
			delete m;
            return ;
        }
    }
    std::cout << "Source is full!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
        if (this->_source[i] && this->_source[i]->getType() == type)
		{
			std::cout << "* create: " << this->_source[i]->getType() << " *" << std::endl;
            return this->_source[i]->clone();
		}
    }
	std::cout << "Type not defined!" << std::endl;
	return NULL;
}
