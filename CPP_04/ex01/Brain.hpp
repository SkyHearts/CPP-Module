/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:27:17 by jyim              #+#    #+#             */
/*   Updated: 2023/07/17 17:49:30 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBRARY_42
#define _LIBRARY_42
#include <iostream>
#include <string>
#endif

#pragma once

class Brain
{
	protected:
	std::string ideas[100];
	public:
	Brain();
	Brain(Brain const &other);
	Brain& operator=(const Brain& other);
};