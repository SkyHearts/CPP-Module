/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:15:49 by jyim              #+#    #+#             */
/*   Updated: 2023/08/30 16:41:06 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : virtual public AForm
{
	public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	~PresidentialPardonForm();
	void execute(Bureaucrat const &executor) const;
	private:
	std::string _target;
};