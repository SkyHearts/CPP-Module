/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:50:18 by jyim              #+#    #+#             */
/*   Updated: 2023/07/10 15:11:31 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "contacts.hpp"

class Phonebook
{
private:
	Contacts contacts[8]; 
public:
	Phonebook();
	~Phonebook();
	void	addNewContacts(void);

};

#endif