/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:47:16 by jyim              #+#    #+#             */
/*   Updated: 2023/07/13 15:12:11 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	public:
	Fixed();
	Fixed(Fixed &other);
	Fixed(const int i);
	Fixed(const float i);
	~Fixed();
	Fixed& operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	private:
	int rawBit;
	static int fracBits;
};