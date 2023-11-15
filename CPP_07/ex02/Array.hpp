	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/10/10 12:25:56 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>


template <class T>
class Array {
    public:
    Array() : _size(0), array(nullptr){}
    Array(int val) : _size(val){
        array = new T[val];
    }
    Array(Array const &other) : _size(other._size) {
        if (other.array != nullptr) {
           this->array = new T[this->_size];
           for (int i = 0; i < this->_size; ++i)
                this->array[i] = other.array[i];
        }
        else
            this->array = nullptr;
    }
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] this->array;
            this->_size = other._size;
        }   
        if (other.array != nullptr) {
            array = new T[_size];
            for (int i = 0; i < _size; ++i) {
                this->array[i] = other.array[i];
            }
        }
        else
            array = nullptr;
    }
    ~Array() {
        delete[] array;
    }
    T& operator[](int index){
        if (index >= this->_size || index < 0) {
            throw std::out_of_range("Out of bounds");
        }
        return array[index];
    }
    int size( void ){return this->_size; }
    private:
    int _size;
    T * array;
};
