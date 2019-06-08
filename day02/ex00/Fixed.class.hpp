/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:02:57 by tshata            #+#    #+#             */
/*   Updated: 2019/06/07 15:57:26 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed{
	private:
		int 				fixed_point_value;
		static const int 	fractional_bits;

	public:
		Fixed(void);
		Fixed(const Fixed &copy); 
		~Fixed(void);
		void operator = (const Fixed &copy);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};
#endif
