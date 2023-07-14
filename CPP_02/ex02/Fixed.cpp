/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:58:36 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 14:11:04 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>

int Fixed::fracBits = 8;

Fixed::Fixed(){
	this->rawBit = 0;
}

Fixed::Fixed(Fixed const &other){
	*this = other;
}

Fixed::Fixed(const int i){
	this->rawBit = (i << this->fracBits);
}

int Fixed::toInt( void ) const{
	return (this->rawBit >> this->fracBits);
}

Fixed::Fixed(const float i){
	this->rawBit = roundf(i * float(1 << this->fracBits));
}

float Fixed::toFloat( void ) const{
	return ((this->rawBit >> this->fracBits) + (float(this->rawBit & ((1 << this->fracBits) - 1)) / (1 << this->fracBits)));
}

Fixed& Fixed::operator=(const Fixed& other){
	this->rawBit = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& other){
	os << other.toFloat();
	return os;
}

Fixed::~Fixed(){
}

int Fixed::getRawBits( void ) const {
	return this->rawBit;
}
void Fixed::setRawBits( int const raw ){
	this->rawBit = raw;
}

//===========================================================================================
//>, <, >=, <=, == and != overload comparison operators

bool Fixed::operator>(const Fixed& other) const{
	if(this->toFloat() > other.toFloat())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& other) const{
	if(this->toFloat() < other.toFloat())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& other) const{
	if(this->toFloat() >= other.toFloat())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& other) const{
	if(this->toFloat() <= other.toFloat())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& other) const{
	if(this->toFloat() == other.toFloat())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& other) const{
	if(this->toFloat() != other.toFloat())
		return true;
	return false;
}

//+, -, * and /overload arithmatic operators
Fixed Fixed::operator+(const Fixed& other){
	Fixed ret;
	ret.rawBit = rawBit + other.rawBit;
	return ret;
}

Fixed Fixed::operator-(const Fixed& other){
	Fixed ret;
	ret.rawBit = rawBit - other.rawBit;
	return ret;
}

Fixed Fixed::operator*(const Fixed& other){
	Fixed ret;
	ret.rawBit = int(roundf(float((rawBit * other.rawBit) >> fracBits)));
	return ret;
}

Fixed Fixed::operator/(const Fixed& other){
	Fixed ret;
	ret.rawBit = int(roundf(float((rawBit << fracBits) / other.rawBit)));
	return ret;
}

//increment and decrement operators
//increment prefix
Fixed& Fixed::operator++(){
	this->rawBit = rawBit + std::numeric_limits<int>::epsilon() + 1;
    return *this;
}
//increment postfix
Fixed Fixed::operator++(int){
	Fixed temp = *this;
	rawBit = rawBit + std::numeric_limits<int>::epsilon() + 1;
    return temp;
}

//decrement prefix
Fixed& Fixed::operator--(){
	this->rawBit = rawBit - std::numeric_limits<int>::epsilon() - 1;
    return *this;
}
//decrement postfix
Fixed Fixed::operator--(int){
	Fixed temp = *this;
	rawBit = rawBit - std::numeric_limits<int>::epsilon() + 1;
    return temp;
}

//max and min
Fixed& Fixed::min(Fixed& a, Fixed& b){
	return (a > b) ? b : a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return (a > b) ? b : a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	return (a < b) ? b : a;
}

const Fixed& Fixed::max (const Fixed& a, const Fixed& b){
	return (a < b) ? b : a;
}