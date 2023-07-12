/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:22:31 by jyim              #+#    #+#             */
/*   Updated: 2023/07/11 17:28:32 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void){
}

Phonebook::~Phonebook(void){
}

void	Phonebook::addNewContacts(void){
	std::cout << "Attention: All information must be filled" << std::endl;
	contacts[this->index].addIndex(this->index);
	contacts[this->index].addContact();
	this->index++;
	if (this->index > 7){
		this->index = 0;
		this->filled = 1;
	}
}

void	Phonebook::displayAll(void){
	int index = 0;
	int max;
	
	if (this->filled)
		max = 8;
	else
		max = this->index;
	if (!max){
		std::cout << "Contact is currently empty, please add contact first!" << std::endl;
		return ;
	}
	std::cout << "┌══════════┬══════════┬══════════┬══════════┬══════════┬══════════┐" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << "|";
	std::cout << std::right << std::setw(10) << "Phone Num." << "|";
	std::cout << std::right << std::setw(10) << "D. Secret" << "|" << std::endl;
	std::cout << "├══════════┼══════════┼══════════┼══════════┼══════════┼══════════┤" << std::endl;
	while (index < max){
		std::cout << "|" << std::right << std::setw(10) << contacts[index].getIndex() << "|";
		std::cout << std::right << std::setw(10) << contacts[index].getFName(1) << "|";
		std::cout << std::right << std::setw(10) << contacts[index].getLName(1) << "|";
		std::cout << std::right << std::setw(10) << contacts[index].getNName(1) << "|";
		std::cout << std::right << std::setw(10) << contacts[index].getNumber(1) << "|";
		std::cout << std::right << std::setw(10) << contacts[index].getSec(1) << "|" << std::endl;
		index++;
	}
	std::cout << "└══════════┴══════════┴══════════┴══════════┴══════════┴══════════┘" << std::endl;
}

void	Phonebook::displayEntry(void){
	int	index;
	int max;
	
	if (this->filled)
		max = 8;
	else
		max = this->index;
	if (!max)
		return ;
	std::cout << "Please select index :" << std::endl;
	if (!(std::cin >> index)){
		std::cout << "Please enter number only" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	if (index <= 0 || index > max){
		std::cout << "Please enter number between ";
		std::cout << "1 to " << max << std::endl;
		return ;
	}
	std::cout << std::left << std::setw(15) << "First Name" << ":" << contacts[index - 1].getFName(0) << std::endl;
	std::cout << std::left << std::setw(15) << "Last Name" << ":" << contacts[index - 1].getLName(0) << std::endl;
	std::cout << std::left << std::setw(15) << "Nickname" << ":" << contacts[index - 1].getNName(0) << std::endl;
	std::cout << std::left << std::setw(15) << "Phone Number" << ":" << contacts[index - 1].getNName(0) << std::endl;
	std::cout << std::left << std::setw(15) << "Darkest Secret" << ":" << contacts[index - 1].getSec(0) << std::endl;
}
