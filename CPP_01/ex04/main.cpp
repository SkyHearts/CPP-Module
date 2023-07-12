/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:33:58 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 17:06:32 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replaceAll(std::string& str, std::string& search, std::string& replace){
	size_t position = 0;
	while((position = str.find(search, position)) != std::string::npos){
		str.erase(position, search.length());
		str.insert(position, replace);
	}
	return str;
}

int main(int argc, char** argv){
	std::string title = argv[1];
	std::string search = argv[2];
	std::string replace = argv[3];
	std::string readOut;

	if(argc == 4){
		std::fstream file;
		std::ofstream outFile("Copy " + title);
		file.open(argv[1], std::ios::in);
		if (!file)
			std::cout << "File not found" << std::endl;
		else{
			
			while(getline(file, readOut)){
				if (readOut.find(search) != std::string::npos)
					outFile << replaceAll(readOut, search, replace) << "\n";
				else
					outFile << readOut << "\n";
			}
		}
		file.close();
		outFile.close();
	}
	else
		std::cout << "Incorrect argument: <file name> <Search String> <Replace String>" << std::endl;
	return (0);
}