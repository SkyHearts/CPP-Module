/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:49:06 by jyim              #+#    #+#             */
/*   Updated: 2023/11/18 16:13:56 by jyim             ###   ########.fr       */
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
		void InsertionSort(Container& array, int left, int right){
			for (int i = left + 1; i <= right; i++)
			{
				int tmp = array[i];
				int j = i - 1;
				while ((j >= left) && (array[j] > tmp)) {
					array[j + 1] = array[j];
					j--;
				}
				array[j + 1] = tmp;
			}
		}
		template<typename Container>
		void MergeSort(Container& array, int left, int right, int size){
			// int length = array.size();
			// if (length <= 1)
			// 	return;
			// if (left < right){
			if (right - left <= size - 1){
				InsertionSort(array, left, right);
			}
			else{
				int middle = left + (right - left) * 0.5;
				// Container LeftArray(array.begin(), array.begin() + middle);
				// Container RightArray(array.begin() + middle, array.end());
				MergeSort(array, left, middle, size);
				MergeSort(array, middle + 1, right, size);
				Merge(array, left, right, middle);	
			}
			// }
		}
		template<typename Container>
		void Merge(Container& array, int left, int right, int middle){
			int i = 0, j = 0, k = left;

			int s1 = (middle - left) + 1;
			int s2 = (right - middle);
			
			Container LeftArray(s1);
			Container RightArray(s2);

			for (i = 0; i < s1; ++i)
				LeftArray[i] = array[left + i];
			for (j = 0; j < s2; ++j)
				RightArray[j] = array[middle + 1 + j];

			i = 0, j = 0;
			
			while (i < s1 && j < s2) {
				if (LeftArray[i] <= RightArray[j]) {
					array[k++] = LeftArray[i++];
				}
				else {
					array[k++] = RightArray[j++];
				}
			}
			while (i < s1) {
				array[k++] = LeftArray[i++];
			}
			while (j < s2) {
				array[k++] = RightArray[j++];
			}
		}
		std::vector<int>& getVector(void) { return _vector; }
		std::deque<int>& getDeque(void) { return _deque; }
};