#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <array>
#include <list>


int main(int, char**)
{
	{
		std::vector<int> a;
		// {2 ,3 ,5 ,1 ,7}
		a.push_back(2);
		a.push_back(3);
		a.push_back(5);
		a.push_back(1);
		a.push_back(7);
		easyfind(a, 2);
		easyfind(a, 8);
	}
	std::cout << std::endl;
	{
		std::deque<int> a;
		a.push_back(2);
		a.push_back(3);
		a.push_back(5);
		a.push_back(1);
		a.push_back(7);
		easyfind(a, 3);
		easyfind(a, 8);
	}
	std::cout << std::endl;
	{
		std::list<int> a;
		a.push_back(2);
		a.push_back(3);
		a.push_back(5);
		a.push_back(1);
		a.push_back(7);
		easyfind(a, 5);
		easyfind(a, 8);
	}
	std::cout << std::endl;
	{
		std::array<int, 5> a = {2, 3, 5, 1, 7};

		easyfind(a, 1);
		easyfind(a, 8);
	}
}