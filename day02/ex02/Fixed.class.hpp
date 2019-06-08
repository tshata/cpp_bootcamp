/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:02:57 by tshata            #+#    #+#             */
/*   Updated: 2019/06/07 18:13:35 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>
class Fixed{
	private:
		int 				fixed_point_value;
		static const int 	fractional_bits;

	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &copy); 
		~Fixed(void);

		void		operator = (const Fixed &copy);
		int			getRawBits(void) const;
		bool		operator < (const Fixed &copy);
		bool		operator > (const Fixed &copy);
		bool		operator <= (const Fixed &copy);
		bool		operator >= (const Fixed &copy);
		bool		operator == (const Fixed &copy);
		bool		operator != (const Fixed &copy);
		Fixed		&operator+(const Fixed &copy);
		Fixed		&operator-(const Fixed &copy);
		Fixed		&operator*(const Fixed &copy);
		Fixed		&operator/(const Fixed &copy);
		Fixed		&operator++();
		Fixed		&operator--();
		Fixed		operator++(int);
		Fixed		operator--(int);
		const static Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		const static Fixed &max(const Fixed &a, const Fixed &b);
		float		toFloat(void) const;
		int			toInt(void) const;
		void		setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &output, const Fixed &f);

#endif
