<<<<<<< HEAD
#include <string>
#include <iostream>

int
main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string     *ptr = &str;
    std::string     &ref = str;

    std::cout << "String    : " << str << std::endl;
    std::cout << "Pointer   : " << *ptr << std::endl;
    std::cout << "Reference : " << ref << std::endl;
    return (0);
}

=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:59:25 by tshata            #+#    #+#             */
/*   Updated: 2019/06/06 17:08:35 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *ptrStr = &str;
	std::string &strRef = str;

	std::cout << str << std::endl << *ptrStr << std::endl << strRef << std::endl;

	return (0);
}
>>>>>>> 3d6cba62b1456de46fb37635a2eb1b14ad1f78b3
