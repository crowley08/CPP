/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:33:13 by saandria          #+#    #+#             */
/*   Updated: 2024/11/08 15:33:23 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HEADER_H
# define HEADER_H

# include <iostream>
# include <iomanip>
# include <string>
# include <numeric>
# include "Contact.Class.hpp"
# include "PhoneBook.Class.hpp"

void	addContact( PhoneBook *book );
void	printContact( PhoneBook *book );
void	printChartHead( void );
void	printContactAttributes( Contact *contact );
void	printSearchContactAttributes( Contact *contact );
void	printChart( PhoneBook *book );

#endif