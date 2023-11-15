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
		std::cout << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << std::endl;
		std::cout << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int> copy = mstack;
		copy.push(1);
		copy.push(3);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		MutantStack<int>::iterator it2 = copy.begin();
		MutantStack<int>::iterator ite2 = copy.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
		while (it2 != ite2)
		{
			std::cout << *it2 << std::endl;
			++it2;
		}
		std::stack<int> s(mstack);
	}
}