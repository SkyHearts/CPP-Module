/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:23:55 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 13:30:59 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void){
	Harl harling;
	
	harling.complain("DEBUG");
	harling.complain("INFO");
	harling.complain("WARNING");
	harling.complain("ERROR");
	return 0;
}