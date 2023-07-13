/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:23:55 by jyim              #+#    #+#             */
/*   Updated: 2023/07/13 13:19:36 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){
	Harl harling;
	
	if (argc == 2){
		std::string level = argv[1];
		harling.complain(level);
	}
	else
		std::cout << "Only one argument" << std::endl;
	return 0;
}