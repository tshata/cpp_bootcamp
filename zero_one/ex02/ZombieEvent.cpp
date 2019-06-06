/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:41:03 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 16:56:05 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string name, std::string type)
{
	this->type = type;
	newZombie(name);
	return;
}

ZombieEvent::~ZombieEvent(void) 
{
	std::cout << "Iniiiating Zombies Event." << std::endl;
	return;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	std::cout << "Zombie type has been set to: " << this->type << std::endl;
	return;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*createZombie = new Zombie(name, this->type);
	return (createZombie);
}

Zombie*	ZombieEvent::randomChump()
{
	srand(time(0));
	int i = rand();
	std::string name = " ";

	if (i % 8 == 0)
		name = "Jesus";
	else if (i % 8 == 1)
		name = "Natasha";
	else if (i % 8 == 2)
		name = "Vision";
	else if (i % 8 == 3)
		name = "Gamora";
	else if (i % 8 == 4)
		name = "Tony";
	else if (i % 8 == 5)
		name = "Tsepo";
	else if (i % 8 == 6)
		name = "Shata";
	else
		name = "Killer";
	Zombie	*createZombie = new Zombie(name, this->type);

	return (createZombie);
}
