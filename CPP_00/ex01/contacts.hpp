/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:57:29 by jyim              #+#    #+#             */
/*   Updated: 2023/07/11 15:52:07 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <stdbool.h>

class Contacts
{
private:
	int			index;
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkSecret;
	std::string truFName;
	std::string truLName;
	std::string truNname;
	std::string truNum;
	std::string truDSec;
public:
	Contacts();
	~Contacts();
	void addIndex(int index);
	void addFirstName(void);
	void addLastName(void);
	void addNickName(void);
	void addPhoneNumber(void);
	void addDarkSecret(void);
	void addContact(void);
	int getIndex(void) const { return index; }
	std::string getFName(int i) const { if (i == 1)return truFName; else return FirstName; }
	std::string getLName(int i) const { if (i == 1)return truLName; return LastName; }
	std::string getNName(int i) const { if (i == 1)return truNname; return Nickname; }
	std::string getNumber(int i) const { if (i == 1)return truNum; return PhoneNumber; }
	std::string getSec(int i) const { if (i == 1)return truDSec; else return DarkSecret; }
};

std::string truncate(std::string input);
std::string truncate1(std::string input);

#endif