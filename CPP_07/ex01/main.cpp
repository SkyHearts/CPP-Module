/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:32 by jyim              #+#    #+#             */
/*   Updated: 2023/11/07 13:29:17 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awsome.hpp"
#include <iterator>

void addone(int &i){
    i += 1;
}

void multwo(float &i){
    i *= 2;
}



int main( void )
{
    {
        int a[] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; ++i)
            std::cout << a[i] << " ";
        std::cout << std::endl;

        iter(a, 5, addone);

        for (int i = 0; i < 5; ++i)
            std::cout << a[i] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    {
        float a[] = {1.1, 2.2, 3.3, 4.4, 5.5};
        for (int i = 0; i < 5; ++i)
            std::cout << a[i] << " ";
        std::cout << std::endl;

        iter(a, 5, multwo);

        for (int i = 0; i < 5; ++i)
            std::cout << a[i] << " ";
        std::cout << std::endl;
    }
        std::cout << std::endl;
    {
        float a[] = {1, 2.2, 3, 4.4, 5};
        for (int i = 0; i < 5; ++i)
            std::cout << a[i] << " ";
        std::cout << std::endl;

        iter(a, 5, ifaddtwo);
		std::cout << std::endl;
    }
	std::cout << std::endl;
    {
		int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
		Awesome tab2[5];
		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
}
