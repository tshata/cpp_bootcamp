/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:41:38 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 13:41:39 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	std::cout << "Spawning a Zombie on the Stack" << std::endl;
	Zombie	Chucky = Zombie("Chucky", "Doll");

	std::cout << std::endl << "Spawning a Zombie Event on the Heap" << std::endl;
	ZombieEvent	*Tony = new ZombieEvent("Tony", "IronZombie");

	std::cout << std::endl << "Setting Zombie type to IronZombie" << std::endl;
	Tony->setZombieType("IronManZombie");

	std::cout << std::endl << "Spawning Zombie Event again with new type" << std::endl;
	Tony->newZombie("Tony");

	std::cout << std::endl << "Changing zombie type to Assassin" << std::endl;
	Tony->setZombieType("Assassin");

	std::cout << std::endl << "Spawning random name Zombie Event with new type" << std::endl;
	Tony->randomChump();

	std::cout << std::endl << "Spawning another Zombie on Heap" << std::endl;
	Zombie *Natasha = new Zombie("Natasha", "Widow");

	std::cout << std::endl << "Eliminating all zombies." << std::endl;
	std::cout << std::endl << "In order of elimination:  Natasha(Heap), Zombie Events (Heap), Chucky (stack)" << std::endl << std::endl;
	delete Tony;
	delete Natasha;
	return (0);
}
