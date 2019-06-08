/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:02:44 by tshata            #+#    #+#             */
/*   Updated: 2019/06/07 18:13:52 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

int const Fixed::fractional_bits = 8;

Fixed::Fixed(void) {
    fixed_point_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    fixed_point_value = num * (1 << fractional_bits);
}

Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    fixed_point_value = roundf(num * (1 << fractional_bits));
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

int Fixed::toInt(void) const
{
	return(fixed_point_value / (1 << fractional_bits));
}

float Fixed::toFloat(void) const
{
	return(fixed_point_value / roundf((1 << fractional_bits)));
}

std::ostream &operator<<(std::ostream &output, const Fixed &f) {
    output << f.toFloat();
    return output;
}

bool Fixed::operator!=(const Fixed &copy)
{
	return(copy.getRawBits() != fixed_point_value);
}

bool Fixed::operator==(const Fixed &copy)
{
	return(copy.getRawBits() == fixed_point_value);
}

bool Fixed::operator<=(const Fixed &copy)
{
	return(copy.getRawBits() <= fixed_point_value);
}

bool Fixed::operator>=(const Fixed &copy)
{
	return(copy.getRawBits() >= fixed_point_value);
}

Fixed &Fixed::operator+(const Fixed &copy)
{
	fixed_point_value += copy.getRawBits();
	return (*this);
}

Fixed &Fixed::operator-(const Fixed &copy)
{
	fixed_point_value -=  copy.getRawBits();
	return (*this);
}

Fixed &Fixed::operator*(const Fixed &copy)
{
	fixed_point_value *= copy.toFloat();
	return (*this);
}

Fixed &Fixed::operator/(const Fixed &copy)
{
	fixed_point_value /= copy.toFloat();
	return (*this);
}

Fixed &Fixed::operator++() {
    ++fixed_point_value;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed &Fixed::operator--() {
   --fixed_point_value;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (b);
    else if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (b);
    else if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else if (a.getRawBits() < b.getRawBits())
        return (b);
    else
        return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else if (a.getRawBits() < b.getRawBits())
        return (b);
    else
        return (a);
}




