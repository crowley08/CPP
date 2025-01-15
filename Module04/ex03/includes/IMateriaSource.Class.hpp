/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.Class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:19:02 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 11:38:21 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_HPP
# define IMATERIASOURCE_CLASS_HPP

# include <iostream>
# include <string>
# include "AMateria.Class.hpp"

class IMateriaSource
{

	public:

		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif /* ************************************************** IMATERIASOURCE_CLASS_H */