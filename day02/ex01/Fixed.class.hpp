/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:02:57 by tshata            #+#    #+#             */
/*   Updated: 2019/06/07 17:52:41 by tshata           ###   ########.fr       */
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
		float		toFloat(void) const;
		int			toInt(void) const;
		void		setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &output, const Fixed &f);

#endif
