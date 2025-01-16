/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:37:32 by saandria          #+#    #+#             */
/*   Updated: 2025/01/16 09:31:05 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.Class.hpp"

Character::Character() : _name("charcter")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( std::string const& name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( const Character & src )
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
    *this = src;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
	}	
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
	{
        if (this->_inventory[i])
		{
			this->_inventory[i] = NULL;
            delete this->_inventory[i];
		}
	}
}

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
			if (this->_inventory[i])
				delete this->_inventory[i];
		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i])
    	        this->_inventory[i] = rhs._inventory[i]->clone();
    	    else
    	        this->_inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const&	Character::getName() const
{
	return this->_name;
}

void	Character::equip( AMateria* m )
{
	for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
			std::cout << this->_name << " equiped " << m->getType() << std::endl;
            this->_inventory[i] = m;
            return ;
        }
    }
    std::cout << "Inventory is full!" << std::endl;
}

void	Character::unEquip( int idx )
{
	if (idx < 0 || idx >= 4 || !this->_inventory[idx])
	{
		std::cout << "No item on the index " << idx << std::endl;	
        return ;
	}
	std::cout << this->_name << " UnEquipped " << _inventory[idx]->getType() << std::endl;
    this->_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && idx == i)
		{
            this->_inventory[i]->use(target);
			return ;
		}
  	}	
	std::cout << "No item on the index " << idx << std::endl;
}
