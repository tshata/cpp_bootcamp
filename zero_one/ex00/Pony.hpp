/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:31:42 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 11:20:39 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	PONY_H
# define	PONY_H

#include <string>

class Pony{
	public:
		Pony(void);
		~Pony(void);
		void			setName(std::string);
		void			setColor(std::string);
		void			setAge(std::string);
		std::string		getName(void);
		std::string		getColor(void);
		std::string		getAge(void);

	private:
		std::string		name;
		std::string		color;
		std::string		age;
};

#endif
