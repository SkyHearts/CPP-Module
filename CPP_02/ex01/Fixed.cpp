/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:58:36 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 10:26:46 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <cmath>

int Fixed::fracBits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->rawBit = 0;
}

Fixed::Fixed(Fixed const &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	this->rawBit = (i << this->fracBits);
}

int Fixed::toInt( void ) const{
	return (this->rawBit >> this->fracBits);
}

Fixed::Fixed(const float i){
	std::cout << "Float constructor called" << std::endl;
	this->rawBit = roundf(i * float(1 << this->fracBits));
}

float Fixed::toFloat( void ) const{
	return ((this->rawBit >> this->fracBits) + (float(this->rawBit & ((1 << this->fracBits) - 1)) / (1 << this->fracBits)));
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->rawBit = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& other){
	os << other.toFloat();
	return os;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return this->rawBit;
}
void Fixed::setRawBits( int const raw ){
	this->rawBit = raw;
}