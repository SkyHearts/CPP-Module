/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:49:06 by jyim              #+#    #+#             */
/*   Updated: 2023/11/15 10:29:37 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <time.h>
#include <deque>
#include <vector>

typedef struct timespec ts;

// template<typename container>
class PmergeMe
{
	private:
		std::deque<int> _deque;
		std::vector<int> _vector;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const &other);
		PmergeMe& operator=(const PmergeMe& other);
		void ParseNumbers(char **argv);
		bool CheckDuplicateVector(void);
		void PrintDeque(void);
		void PrintVector(void);
		template<typename Container>
		void MergeSort(Container& array){
			int length = array.size();
				if (length <= 1) return;
			int middle = length * 0.5;
			Container left(array.begin(), array.begin() + middle);
			Container right(array.begin() + middle, array.end());
			MergeSort(left);
			MergeSort(right);
			Merge(left, right, array);
		}
		template<typename Container>
		void Merge(Container& left, Container& right, Container& results){
			int L_size = left.size();
			int R_size = right.size();
			int i = 0, j = 0, k = 0;
			
			while (j < L_size && k < R_size) 
			{
				if (left[j] <= right[k]) {
					results[i] = left[j];
					j++;
				}
				else {
					results[i] = right[k];
					k++;
				}
				i++;
			}
			while (j < L_size) {
				results[i] = left[j];
				j++; i++;
			}
			while (k < R_size) {
				results[i] = right[k];
				k++; i++;
			}
		}
		std::vector<int>& getVector(void) { return _vector; }
		std::deque<int>& getDeque(void) { return _deque; }
};