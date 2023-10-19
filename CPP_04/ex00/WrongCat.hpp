/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:25:55 by jyim              #+#    #+#             */
/*   Updated: 2023/10/19 19:04:39 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBRARY_42
#define _LIBRARY_42
#include <iostream>
#include <string>
#include "Animal.hpp"
#endif

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(WrongCat const &other);
	WrongCat& operator=(const WrongCat& other);
	~WrongCat();
	void makeSound(void) const;
};