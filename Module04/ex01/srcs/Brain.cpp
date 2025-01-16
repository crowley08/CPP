/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:32:54 by saandria          #+#    #+#             */
/*   Updated: 2025/01/16 12:42:10 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i].assign("idea");
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;
	for ( int i = 0; i < 100; i++)
		this->_ideas[i].assign(src._ideas[i]);
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for ( int i = 0; i < 100; i++)
			this->_ideas[i].assign(rhs._ideas[i]);
	}
	return *this;
}

std::string	Brain::getIdea(int idx) const
{
	return this->_ideas[idx]; 
}

void	Brain::setIdea(std::string idea, int idx)
{
	this->_ideas[idx] = idea;
}
