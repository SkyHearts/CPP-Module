/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:08:49 by jyim              #+#    #+#             */
/*   Updated: 2023/07/10 15:08:37 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts::Contacts(void){
	std::cout << "Contact Object is being created" << std::endl;
}

Contacts::~Contacts(void){
	std::cout << "Contact Object is being deleted" << std::endl;
}

Contacts* Contacts::newContacts(void){
	Contacts* Contact = new Contacts;
	std::string input;

	std::cout << "First name: ";
	std::cin >> Contact->FirstName;
	std::cout << "Last name: ";
	std::cin >> Contact->LastName;
	std::cout << "Nickname: ";
	std::cin >> Contact->Nickname;
	std::cout << "Phone number: ";
	std::cin >> Contact->PhoneNumber;
	std::cout << "Darkest Secret: ";
	std::cin >> Contact->DarkSecret;
	return Contact;
}