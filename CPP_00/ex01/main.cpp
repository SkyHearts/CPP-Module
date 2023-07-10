/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:50:15 by jyim              #+#    #+#             */
/*   Updated: 2023/07/10 13:20:31 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void){
	Phonebook Phonebook;
	std::string inputCommand;

	while(1){
		std::cout << "Please select a command: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> inputCommand;
		if (inputCommand.compare("EXIT") == 0)
			break ;
		else if (inputCommand.compare("ADD") == 0)
			break ;
		else if (inputCommand.compare("SEARCH") == 0)
			break ;
		else
			std::cout << "Invalid Command" << std::endl;
	}
	system("leaks -q phonebook");
	return (0);
}