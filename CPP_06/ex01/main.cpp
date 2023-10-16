/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:32 by jyim              #+#    #+#             */
/*   Updated: 2023/09/11 16:56:40 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void){
	Data* test = new Data;

	test->str = "Testingggggg!";
	test->x = 5;
	test->y = 'L';

	Serializer f;
	uintptr_t ptest = f.serialize(test);
	std::cout << test->str << std::endl;
	std::cout << test->x << std::endl;
	std::cout << test->y << std::endl;
	std::cout << ptest << std::endl;
	
	std::cout << std::endl;

	Data* next = f.deserialize(ptest);
	std::cout << next->str << std::endl;
	std::cout << next->x << std::endl;
	std::cout << next->y << std::endl;
	uintptr_t pnext = f.serialize(next);
	std::cout << pnext << std::endl;
}