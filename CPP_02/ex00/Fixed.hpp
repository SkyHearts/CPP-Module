/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:47:16 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 13:55:46 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	public:
	// Default constructor
	Fixed();
	// Copy constructor
	Fixed(Fixed &other);
	// Destructor
	~Fixed();
	// Copy assignment operator
	Fixed& operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	private:
	int rawBit;
	static int fracBits;
};