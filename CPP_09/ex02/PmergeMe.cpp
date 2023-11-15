/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:06:28 by jyim              #+#    #+#             */
/*   Updated: 2023/11/15 10:19:41 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
}

PmergeMe::~PmergeMe(){
}

PmergeMe::PmergeMe(PmergeMe const &other){
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other){
	if (this == &other)
		return (*this);
	return (*this);
}

bool is_digit(char *argv){
	// std::cout << "Here1 number: " << argv << std::endl;
	int size = std::strlen(argv);
	// std::cout << "Here2 size: " << size << std::endl;
	for (int i = 0; i < size; i++){
		if (argv[i] == '-' || argv[i] == '+')
			continue ;
        if (!(argv[i] >= 48 && argv[i] <= 57)) {
            return false;
		}
	}
	return true;
}

void PmergeMe::ParseNumbers(char **argv){
	while (*argv != NULL){

		if (!is_digit(*argv))
			throw(std::invalid_argument("Numbers only."));
		int num = std::atoi(*argv);
		if (num < 0)
			throw(std::invalid_argument("Positive Numbers only."));
		this->_deque.push_back(num);
		this->_vector.push_back(num);
		argv++;		
	}
	if(CheckDuplicateVector())
		throw(std::invalid_argument("Contains duplicate number."));
}

bool PmergeMe::CheckDuplicateVector(void){
	if(_vector.empty())
		return false ;

	for (size_t i = 0; i < _vector.size() - 1; ++i)
		for (size_t j = i + 1; j < _vector.size(); ++j)
			if (_vector[i] == _vector[j])
				return true;
	return false;
}

void PmergeMe::PrintDeque(void){
	for (std::deque<int>::iterator iter = _deque.begin(); iter != _deque.end(); iter++){
		std::cout << *iter;
		if (iter != _deque.end())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::PrintVector(void){
	for (std::vector<int>::iterator iter = _vector.begin(); iter != _vector.end(); iter++){
		std::cout << *iter;
		if (iter != _vector.end())
			std::cout << " ";
	}
	std::cout << std::endl;
}

// template<typename container>
// void PmergeMe::Merge (container& left, container& right, container& results) {
// 	int L_size = left.size();
//     int R_size = right.size();
//     int i = 0, j = 0, k = 0;
	
//     while (j < L_size && k < R_size) 
//     {
//         if (left[j] < right[k]) {
//             results[i] = left[j];
//             j++;
//         }
//         else {
//             results[i] = right[k];
//             k++;
//         }
//         i++;
//     }
//     while (j < L_size) {
//         results[i] = left[j];
//         j++; i++;
//     }
//     while (k < R_size) {
//         results[i] = right[k];
//         k++; i++;
//     }
// }

// template<typename container>
// void PmergeMe::MergeSort(container& array){
// 	int length = array.size();
// 		if (length <= 1) return; //base case
		
// 	int middle = length / 2;
// 	std::vector<int> left(array.begin(), array.begin() + middle);
// 	std::vector<int> right(array.begin() + middle, array.end());
// 	// int[] leftArray = new int[middle];
// 	// int[] rightArray = new int[length - middle];

// 	MergeSort(left);
// 	MergeSort(right);
// 	Merge(left, right, array);
// }
