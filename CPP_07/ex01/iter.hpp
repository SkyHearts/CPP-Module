/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/10/09 18:46:12 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>


template <typename T>
void addtwo(T& param1) {
    param1 += 2;
}


// template<class T> void f(T) { }
// template <typename T> void func(T param) {}
template <typename T>
void applyFunc(T arr[], size_t length, void (*Func)(T&)) {
    for (int i = 0; i < length; ++i)
        Func(arr[i]);
};

