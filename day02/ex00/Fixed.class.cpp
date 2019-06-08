/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:02:44 by tshata            #+#    #+#             */
/*   Updated: 2019/06/07 16:34:05 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int const Fixed::fractional_bits = 8;

Fixed::Fixed(void) {
    fixed_point_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed &copy) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_point_value = copy.getRawBits();
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point_value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    fixed_point_value = raw;
}
