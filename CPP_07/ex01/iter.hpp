/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/11/07 13:29:33 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>


template <typename T>
void ifaddtwo(T const & param1) {
    std::cout << param1 + 2 << " ";
}

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

// template<class T> void f(T) { }
// template <typename T> void func(T param) {}
template <typename T>
void iter(T* arr, size_t length, void (*Func)(T const &)) {
	if (!arr || !Func)
		return ;
    for (int i = 0; i < length; ++i)
        Func(arr[i]);
};

template <typename T>
void iter(T* arr, size_t length, void (*Func)(T &)) {
	if (!arr || !Func)
		return ;
    for (int i = 0; i < length; ++i)
        Func(arr[i]);
};

