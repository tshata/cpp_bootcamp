/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:48:03 by tshata            #+#    #+#             */
/*   Updated: 2019/06/04 14:44:14 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;
	char c;
	
	j = 1;
	if(argc <= 1)
	{
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	} else
	{
		while(argv[j])
		{
			i = 0;	
			while(argv[j][i])
			{
				c = argv[j][i];
				putchar(toupper(c));	
				i++;
			}
			std::cout <<" ";
			j++;
		}
				std::cout << std::endl;
	}
	
	return (0);
}
