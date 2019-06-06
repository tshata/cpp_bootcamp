/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:40:39 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 13:40:41 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
	announce();
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " has died." << std::endl;
	return;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")>  Braiiiiiiinnnssss.." << std::endl;
	return;
}
