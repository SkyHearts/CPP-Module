/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:49:06 by jyim              #+#    #+#             */
/*   Updated: 2023/11/10 16:30:40 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <time.h>
#include <stack>

class RPN
{
	private:
		std::stack<int> _expr;
	public:
		RPN();
		~RPN();
		RPN(RPN const &other);
		RPN& operator=(const RPN& other);
		int getOperand(char s);
		void calc(char *expr);
};