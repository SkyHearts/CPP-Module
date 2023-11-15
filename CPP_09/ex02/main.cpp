/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:46:09 by jyim              #+#    #+#             */
/*   Updated: 2023/11/15 10:09:54 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sys/time.h>

double processTime(ts start, ts end){
	double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e6;
	// std::cout << time_taken << std::endl;
    time_taken = (time_taken + (end.tv_nsec - start.tv_nsec) * 1e-3);
	// std::cout << time_taken << std::endl;
 
    // cout << "Time taken by program is : " << fixed
    //      << time_taken << setprecision(9);
    // cout << " sec" << endl;
	return time_taken;
}

int main(int argc, char **argv)
{
	if (argc <= 2){
		std::cerr << "Error: Requires more than 1 number." << std::endl;
		return 0;
	}
	try
	{
		PmergeMe merge;
		ts start, end;
		merge.ParseNumbers(++argv);
		std::cout << "Before: ";
		merge.PrintVector();
		std::ios_base::sync_with_stdio(false);
		clock_gettime(CLOCK_MONOTONIC, &start);
		merge.MergeSort(merge.getVector());
		clock_gettime(CLOCK_MONOTONIC, &end);
		std::cout << "After: ";
		merge.PrintVector();
		std::cout << "Time to process a range of " << merge.getVector().size() << " elements with std::vector<int> : " << std::fixed << processTime(start, end) << std::setprecision(5) << " us" << std::endl;
		// std::cout << "Before deque: ";
		// merge.PrintDeque();
		clock_gettime(CLOCK_MONOTONIC, &start);
		merge.MergeSort(merge.getDeque());
		clock_gettime(CLOCK_MONOTONIC, &end);
		std::cout << "Time to process a range of " << merge.getDeque().size() << " elements with std::deque<int> : " << processTime(start, end) << " us" << std::endl;
		// std::cout << "After deque: ";
		// merge.PrintDeque();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}