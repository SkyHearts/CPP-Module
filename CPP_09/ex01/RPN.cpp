/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:06:28 by jyim              #+#    #+#             */
/*   Updated: 2023/11/10 16:51:00 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){
}

RPN::~RPN(){
}

RPN::RPN(RPN const &other){
	*this = other;
}

RPN& RPN::operator=(const RPN& other){
	if (this == &other)
		return (*this);
	return (*this);
}

int RPN::getOperand(char s){
	char oneCharReturn[5] = "+/*-";
	if( strchr(oneCharReturn, s) != '\0' )
		return s;
	return 0;
}

void RPN::calc(char *expr){
	int a,b,result;
	char *token = strtok(expr, " ");
	while (token != NULL){
		char c = token[0];
		if (getOperand(c)){
			if (_expr.size() < 2){
				std::cout << "Error: Expression not valid" << std::endl;
				return ;
			}
			b = _expr.top();
			_expr.pop();
			a = _expr.top();
			_expr.pop();
			switch(c){
				case '+':
				result = a + b;
				// std::cout << a << " + " << b << " = " << result << std::endl;
				break ;
				case '-':
				result = a - b;
				// std::cout << a << " - " << b << " = " << result << std::endl;
				break ;
				case '*':
				result = a * b;
				// std::cout << a << " * " << b << " = " << result << std::endl;
				break ;
				case '/':
				result = a / b;
				// std::cout << a << " / " << b << " = " << result << std::endl;
				break ;
			}
			this->_expr.push(result);
		}
		else{
			if (isdigit(c))
				this->_expr.push(atoi(token));
			else{
				std::cout << "Error: Expression not valid" << std::endl;
				return ;
			}			
		}
		token = strtok(NULL, " ");
	}
	std::cout << _expr.top() << std::endl;
}