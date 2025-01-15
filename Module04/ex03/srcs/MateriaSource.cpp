/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:25:58 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 11:41:36 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.Class.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	    this->_source[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	std::cout << "MateriaSource copy constructor" << std::endl;
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
	std::cout << "MateriaSource destructor" << std::endl;
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
            return this->_source[i]->clone();
    }
	std::cout << "Type not defined!" << std::endl;
	return NULL;
}
