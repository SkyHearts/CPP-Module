/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/09/15 14:55:16 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

template <typename T>
void swap(T& param1, T& param2, ...) {
	T tmp = param1;
	param1 = param2;
	param2 = tmp;
}

template <typename T>
T min(T param1, T param2, ...) {
    if (param1 > param2)
		return (param2);
	else
		return (param1);
}

template <typename T>
T max(T param1, T param2, ...) {
    return (param1 > param2 ? param1 : param2);
}