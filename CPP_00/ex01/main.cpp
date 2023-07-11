/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:50:15 by jyim              #+#    #+#             */
/*   Updated: 2023/07/11 16:19:45 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void){
	Phonebook Phonebook;
	std::string inputCommand;
	Phonebook.index = 0;
	Phonebook.filled = 0;

	while(1){
		std::cout << "Please select a command: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> inputCommand;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (inputCommand.compare("EXIT") == 0)
			break ;
		else if (inputCommand.compare("ADD") == 0)
			Phonebook.addNewContacts();
		else if (inputCommand.compare("SEARCH") == 0){
			Phonebook.displayAll();
			Phonebook.displayEntry();
		}
		else
			std::cout << "Invalid Command" << std::endl;
	}
	system("leaks -q phonebook");
	return (0);
}