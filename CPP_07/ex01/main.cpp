/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:32 by jyim              #+#    #+#             */
/*   Updated: 2023/10/09 18:45:45 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

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

        applyFunc(a, 5, addone);

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

        applyFunc(a, 5, multwo);

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

        applyFunc(a, 5, addtwo);

        for (int i = 0; i < 5; ++i)
            std::cout << a[i] << " ";
        std::cout << std::endl;
    }
}
