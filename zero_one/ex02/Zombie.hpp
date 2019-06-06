/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:40:50 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 13:40:54 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie{

	private:
		std::string name;
		std::string type;

	public:
		Zombie(std::string type, std::string name);
		~Zombie(void);

		void	announce();
													 
};

#endif
