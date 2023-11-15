/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awsome.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:31:12 by jyim              #+#    #+#             */
/*   Updated: 2023/11/07 12:48:14 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
		private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }