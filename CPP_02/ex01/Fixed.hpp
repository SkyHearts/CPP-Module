/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:47:16 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 10:07:28 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(const int i);
	Fixed(const float i);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed& operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	friend	std::ostream& operator<<(std::ostream& os, const Fixed& other);
	
	private:
	int rawBit;
	static int fracBits;
};
