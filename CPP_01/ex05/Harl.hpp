/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:17:20 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 17:33:29 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

static enum stringLevel {
	debug,
	info,
	warning,
	error
};

class Harl
{
	public:
	void	complain(std::string level);
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};