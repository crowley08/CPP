/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:31:45 by saandria          #+#    #+#             */
/*   Updated: 2025/01/16 11:28:17 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"

class Brain
{

	public:

		Brain();
		Brain( Brain const& src );
		~Brain();

		Brain&		operator=( Brain const& rhs );

		std::string	getIdea(int idx) const;
		void		setIdea( std::string idea, int idx );

	private:

		std::string	_ideas[100];

};

#endif /* *********************************************************** BRAIN_CLASS_H */