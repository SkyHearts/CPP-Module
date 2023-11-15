#include "Span.hpp"
#include <span>
#include <unistd.h>

Span::Span(){
	throw Param("Insert size of container");
}

Span::Span(const Span& other){
	*this = other;
}

Span& Span::operator=(const Span& other){
		if (this != &other){
			this->_size = other._size;
			this->list = other.list;
		}
		return *this;
}

void Span::addNumber(int num) {
	try
	{
		if (this->list.size() == this->_size)
			throw Param("List is full");
		this->list.push_back(num);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int Span::shortestSpan(void) {
	try
	{
		if (this->list.size() < 2)
			throw Param("Not enough numbers");
		std::vector<int> sorted = this->list;
		std::sort(sorted.begin(), sorted.end());
		std::vector<int>::iterator a;
		int shortest_span = std::abs(sorted[1] - sorted[0]);
		for (a = sorted.begin(); a < sorted.end() - 1; a++) {
			int span = std::abs(*a - *std::next(a , 1));
			if (span < shortest_span)
				shortest_span = span;
		}
		// int shortest_span = std::abs(list[0] - list[1]);
		// for (int j = 1; j < list.size(); ++j) {
		// 	int span = std::abs(list[j - 1] - list[j]);
		// 	if (span < shortest_span)
		// 		shortest_span = span;
		// }
		return shortest_span;
	}
	catch(const Param& e)
	{
		std::cerr << e.what() << '\n';
	}
	throw Param("Return Error");
}

int Span::longestSpan(void) {
	try
	{
		if (this->list.size() < 2)
			throw Param("Not enough numbers");
		// std::vector<int>::iterator a;
		int minimum = *std::min_element(list.begin(), list.end());
		int maximum = *std::max_element(list.begin(), list.end());
		int longest_span = std::abs(maximum - minimum);
		// int longest_span = std::abs(list[1] - list[0]);
		// for (a = list.begin(); a < list.end() - 1 ; a++) {
		// 	int span = std::abs(*a - *std::next(a , 1));
		// 	if (span > longest_span)
		// 		longest_span = span;
		// }
	// 	for (int j = 1; j < list.size(); ++j) {
	// 		int span = std::abs(list[j - 1] - list[j]);
	// 		if (span > longest_span)
	// 			longest_span = span;
	// 	}
		return longest_span;
	}
	catch(const Param& e)
	{
		std::cerr << e.what() << '\n';
	}
	throw Param("Return Error");
}

void Span::fillNum(void) {
	srand((unsigned) time(NULL));
	int range = 10000;
	int fillSize = this->_size - this->list.size();
	std::vector<int>::iterator a;
	
	for (int i = 0; i < fillSize; ++i){
		a = list.end();
		list.insert(a, 1, (rand() % range));
		usleep(10);
	}
	// for (int i = 0; i < fillSize; ++i){
	// 	addNumber(rand() % range);
	// 	usleep(10);
	// }
}

void Span::printContents(void) {
	for (int i = 0; i < this->list.size(); ++i) {
		std::cout << list[i] << " ";
	}
	std::cout << std::endl;
}