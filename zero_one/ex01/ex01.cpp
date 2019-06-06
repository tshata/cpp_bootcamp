/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:55:08 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 13:37:01 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
std::string* panthere = new std::string("String panthere");
std::cout << *panthere << std::endl;
delete panthere;
}

int main(void)
{
	memoryLeak();
	return(0);
}
