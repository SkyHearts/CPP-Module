/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:17:20 by jyim              #+#    #+#             */
/*   Updated: 2023/07/13 13:32:47 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl
{
	public:
	void	complain(std::string level);
	void	harlFilter(int i);
	struct Function{
		int index;
		std::string level;
	};
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};