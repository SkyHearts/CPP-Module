/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:15:49 by jyim              #+#    #+#             */
/*   Updated: 2023/08/30 15:49:57 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : virtual public AForm
{
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const &executor) const;
	private:
	std::string _target;
};