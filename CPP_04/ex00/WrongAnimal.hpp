/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:24:52 by jyim              #+#    #+#             */
/*   Updated: 2023/10/19 18:25:20 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBRARY_42
#define _LIBRARY_42
#include <iostream>
#include <string>
#endif

class WrongAnimal
{
	protected:
	std::string m_type;
	public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &other);
	WrongAnimal& operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();
	std::string getType(void) const { return m_type; }
	void makeSound(void) const;
};
