/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:08:49 by jyim              #+#    #+#             */
/*   Updated: 2023/07/11 16:22:18 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts::Contacts(void){
}

Contacts::~Contacts(void){
}

std::string truncate(std::string input){
	if (input.length() > 10)
		return input.substr(0, 9) + ".";
	return input;
}

void Contacts::addIndex(int index){
	this->index = (index + 1);
}

void Contacts::addFirstName(void){
	std::string input;

	do {
	std::cout << "First name: ";
	std::getline(std::cin >> std::ws, input);
	}
	while (input.empty());
	this->FirstName = input;
	this->truFName = truncate(input);
}

void Contacts::addLastName(void){
	std::string input;

	do {
	std::cout << "Last name: ";
	std::getline(std::cin >> std::ws, input);
	}
	while (input.empty());
	this->LastName = input;
	this->truLName = truncate(input);
}

void Contacts::addNickName(void){
	std::string input;

	do {
	std::cout << "Nick name: ";
	std::getline(std::cin >> std::ws, input);
	}
	while (input.empty());
	this->Nickname = input;
	this->truNname = truncate(input);
}

void Contacts::addPhoneNumber(void){
	std::string input;

	do {
	std::cout << "Phone Number: ";
	std::getline(std::cin >> std::ws, input);
	}
	while (input.empty());
	this->PhoneNumber = input;
	this->truNum = truncate(input);
}

void Contacts::addDarkSecret(void){
	std::string input;

	do {
	std::cout << "Darkest Secret: ";
	std::getline(std::cin >> std::ws, input);
	}
	while (input.empty());
	this->DarkSecret = input;
	this->truDSec = truncate(input);
}

void Contacts::addContact(void){
	Contacts::addFirstName();
	Contacts::addLastName();
	Contacts::addNickName();
	Contacts::addPhoneNumber();
	Contacts::addDarkSecret();
}
