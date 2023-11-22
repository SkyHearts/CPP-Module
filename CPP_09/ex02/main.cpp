/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:46:09 by jyim              #+#    #+#             */
/*   Updated: 2023/11/18 20:19:24 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
// #include <sys/time.h>
#include <ctime>
// #include <unistd.h>

double processTime(ts start, ts end){
	double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e6;
	// std::cout << time_taken << std::endl;
    time_taken = (time_taken + (end.tv_nsec - start.tv_nsec) * 1e-3);
	// std::cout << (end.tv_nsec - start.tv_nsec) << std::endl;
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
		// start.tv_nsec = 0; start.tv_sec = 0;
		// end.tv_nsec = 0; end.tv_sec = 0;
		merge.ParseNumbers(++argv);
		std::cout << "Before: ";
		merge.PrintVector();
		std::ios_base::sync_with_stdio(false);
		clock_gettime(CLOCK_MONOTONIC_RAW, &start);
		merge.MergeSort(merge.getVector(), 0, merge.getVector().size() - 1, 10);
		clock_gettime(CLOCK_MONOTONIC_RAW, &end);
		std::cout << "After: ";
		merge.PrintVector();
		if (merge.CheckDuplicateVector())
			std::cout << "error: merge sort failed" << std::endl;
		// start.tv_nsec = 0; start.tv_sec = 0;
		// end.tv_nsec = 0; end.tv_sec = 0;
		std::cout << "Time to process a range of " << merge.getVector().size() << " elements with std::vector<int> : " << std::fixed << std::setprecision(3) << processTime(start, end) <<  " us" << std::endl;
		clock_gettime(CLOCK_MONOTONIC_RAW, &start);
		merge.MergeSort(merge.getDeque(), 0, merge.getDeque().size() - 1, 10);
		clock_gettime(CLOCK_MONOTONIC_RAW, &end);
		std::cout << "Time to process a range of " << merge.getDeque().size() << " elements with std::deque<int> : " << processTime(start, end) << " us" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// Time to process a range of  3000 elements with std::vector:   5.2254 ms; cmp: 30546
// Time to process a range of  3000 elements with  std::deque:   7.5885 ms; cmp: 30546
// Time to process a range of  3000 elements with std::vector:   2.8652 ms; cmp: 30425
// Time to process a range of  3000 elements with  std::deque:  10.2546 ms; cmp: 30425
// Time to process a range of  3000 elements with std::vector:   3.8632 ms; cmp: 30435
// Time to process a range of  3000 elements with  std::deque:   7.3743 ms; cmp: 30435