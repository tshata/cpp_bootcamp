/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:20:16 by tshata            #+#    #+#             */
/*   Updated: 2019/06/05 16:55:35 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

//This contact variable is declared in the stack and when it is returned
//the contact object will be "freed" from memory. Unlike an integer, to maintain
//data integrity, you need to declare this on the heap and deal with it accordingly at
//the end of program execution
Contact *addContact(void)
{
    Contact     *new_contact = new Contact();
    std::string input;

	std::cout << "First name : ";
    std::getline(std::cin, input);
    new_contact->setFirstName(input);
	
	std::cout << "Last name : ";
    std::getline(std::cin, input);
	new_contact->setLastName(input);
	
	std::cout << "Nickname : ";
    std::getline(std::cin, input);
	new_contact->setNickName(input);
	
	std::cout << "Login : ";
    std::getline(std::cin, input);
	new_contact->setLogin(input);
	
	std::cout << "Postal address : ";
    std::getline(std::cin, input);
	new_contact->setPostalAddress(input);
	
	std::cout << "Email Address : ";
    std::getline(std::cin, input);
	new_contact->setEmailAddress(input);
	
	std::cout << "Phone Number : ";
    std::getline(std::cin, input);
	new_contact->setPhoneNumber(input);
	
	std::cout << "BirthDate : ";
    std::getline(std::cin, input);
	new_contact->setBirthDate(input);
	
	std::cout << "Favorite Meal : ";
    std::getline(std::cin, input);
	new_contact->setFavoriteMeal(input);
	
	std::cout << "Underwear Color : ";
    std::getline(std::cin, input);
	new_contact->setUnderWearColor(input);
	
	std::cout << "Darkest Secret : ";
    std::getline(std::cin, input);
	new_contact->setDarkestSecret(input);
	
	std::cout << std::endl << "Contact Added" << std::endl;	
	return (new_contact);
}


