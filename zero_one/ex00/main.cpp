/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:31:52 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 12:05:09 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

static void ponyOnTheHeap(void)
{
	Pony   *aPony = new Pony();
	std::string  input;

	std::cout << "Name : " ;
	getline(std::cin, input);
	aPony->setName(input);

	std::cout << "Age : "  ;
	getline(std::cin, input);
	aPony->setAge(input);

	std::cout << "Color : " ;
	getline(std::cin, input);
	aPony->setColor(input);

	std::cout << "Name : " << aPony->getName() << std::endl;
	std::cout << "Age : " << aPony->getAge() << std::endl;
	std::cout << "Color : " << aPony->getColor() << std::endl;

	std::cout << "Under the hood, we access the data using the arrow notation e.g aPony->setAge()" << std::endl;
	std::cout << "When we make an instance of our object we use the keyword: new, e.g Pony aPony = new Pony();" << std::endl;
	
	delete aPony;
}

static void ponyOnTheStack(void)
{
	Pony		aPony;
	std::string	input;

	std::cout << "Name : ";
	std::getline(std::cin, input);
	aPony.setName(input);

	std::cout << "Age : ";
	std::getline(std::cin, input);
	aPony.setAge(input);

	std::cout << "Color : ";
	std::getline(std::cin, input);
	aPony.setColor(input);

	std::cout << "Name : " << aPony.getName() << std::endl;
	std::cout << "Age : " << aPony.getAge() << std::endl;
	std::cout << "Color : " << aPony.getColor() << std::endl;

	std::cout << "Under the hood, we access the data using the dot notation e.g aPony.setAge()" << std::endl;
	std::cout << "When we make an instance of our object we just declare it e.g Pony aPony;" << std::endl;


}

int main(void)
{
	int index;
	std::string selector;
	std::cout << "What would you like to test? The heap or the Stack?" << std::endl;
	std::cout << "0 for ponyOnTheHeap" << std::endl;
	std::cout << "1 for ponyOnTheStack" << std::endl;	
	std::cout << "2 to quit" << std::endl;
	while(1)
	{
		getline(std::cin, selector);
		index = atoi(selector.c_str());

		if(index == 0)
		{
			std::cout << "=================ponyOnTheHeap=================" << std::endl;
			ponyOnTheHeap();
		}else if(index == 1)
		{
			std::cout << "=================ponyOnTheStack=================" << std::endl;
			ponyOnTheStack();
		}
		else if(index == 2)
		{
			break;
		}
	}
	return (0);
}
