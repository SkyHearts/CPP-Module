/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awsome.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:31:12 by jyim              #+#    #+#             */
/*   Updated: 2023/11/07 12:33:06 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }