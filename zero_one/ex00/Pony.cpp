/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:31:32 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 11:19:18 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void){return;}
Pony::~Pony(void){return;}


std::string Pony::getName(void)
{
	return (this->name);
}

std::string Pony::getColor(void)
{
	return (this->color);
}

std::string	Pony::getAge(void)
{
	return (this->age);
}

void	Pony::setName(std::string str)
{
	this->name = str;
	return;
}

void	Pony::setColor(std::string str)
{
	this->color = str;
	return;
}

void	Pony::setAge(std::string str)
{
	this->age = str;
	return;
}


