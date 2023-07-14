/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:59:35 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 16:46:04 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float ft_abs(float area){
	return area < 0 ? -area : area;
}

float area(Point a, Point b, Point c){
	float area = 0.5 * ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) +
		(b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) + 
		(c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())));
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
	float A = ft_abs(area (a, b, c));
	float A1 = ft_abs(area (point, b, c));
	float A2 = ft_abs(area (a, point, c));
	float A3 = ft_abs(area (a, b, point));
	if (A1 == 0 || A2 == 0 || A3 == 0)
		return false;
	return (A == A1 + A2 + A3);
}
