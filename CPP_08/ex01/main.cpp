#include <iostream>
#include "Span.hpp"

int main(int, char**)
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printContents();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(12);
	}
	std::cout << std::endl;
	{
		Span sp = Span(10);
		sp.addNumber(1);
		sp.fillNum();
		sp.printContents();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(1);
	}
}