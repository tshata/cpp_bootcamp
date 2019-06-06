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
#include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde z1 = ZombieHorde(20);
    	ZombieHorde z2 = ZombieHorde();
    	z1.announce();
    	z2.announce();

	return (0);
}
