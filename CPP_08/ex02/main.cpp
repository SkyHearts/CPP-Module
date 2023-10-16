#include <iostream>
#include "MutantStack.hpp"

int main(int, char**)
{
	{
		MutantStack<int> lst;
		lst.push(6);
		lst.push(3);
		lst.push(17);
		lst.push(9);
		lst.push(11);
		std::cout << *lst.begin() << std::endl;
		std::cout << *lst.end() << std::endl;
		std::cout << std::endl;
		MutantStack<int>::iterator iter = lst.begin();
		for (; iter < lst.end(); iter++)
			std::cout << *iter << std::endl;
		
	}
	std::cout << std::endl;
	{
		MutantStack<std::string> lst;
		lst.push("I");
		lst.push("am");
		lst.push("inevitable");
		lst.push("joking");
		lst.push("bye");
		std::cout << *lst.begin() << std::endl;
		std::cout << *lst.end() << std::endl;
		std::cout << std::endl;
		MutantStack<std::string>::iterator iter = lst.begin();
		for (; iter < lst.end(); iter++)
			std::cout << *iter << std::endl;
	}
}