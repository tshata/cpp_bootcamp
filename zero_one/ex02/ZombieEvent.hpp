/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:41:24 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 13:41:25 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class	ZombieEvent {

	public: 

		ZombieEvent(std::string name, std::string type); 
		~ZombieEvent(void);

		std::string		type;

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump();

};

#endif

