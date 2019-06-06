/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:08:44 by tshata            #+#    #+#             */
/*   Updated: 2019/06/05 17:03:05 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

static void	ft_search(Contact *contacts[], int nbr_contacts)
{
 	int          index;
	std::string  index_str;

    std::cout << "Enter the index of a contact: ";
    std::getline(std::cin, index_str);
	index = atoi(index_str.c_str());
    if (std::cin.good() && (index >= 0 && index < nbr_contacts))
    {
        std::cout << contacts[index]->getFirstName() << std::endl;
        std::cout << contacts[index]->getLastName() << std::endl;
        std::cout << contacts[index]->getNickName() << std::endl;
        std::cout << contacts[index]->getLogin() << std::endl;
        std::cout << contacts[index]->getPostalAddress() << std::endl;
        std::cout << contacts[index]->getEmailAddress() << std::endl;
        std::cout << contacts[index]->getPhoneNumber() << std::endl;
        std::cout << contacts[index]->getBirthDate() << std::endl;
        std::cout << contacts[index]->getFavoriteMeal() << std::endl;
        std::cout << contacts[index]->getUnderWearColor() << std::endl;
        std::cout << contacts[index]->getDarkestSecret() << std::endl;
    }
    else 
    {
        std::cin.clear();
        std::cout << "Sorry, that index cannot be found. :(" << std::endl;
    }
}

static std::string
truncateContact(std::string field)
{
    field = field.erase((FIELD_WITDTH - 1), \
    field.length() - (FIELD_WITDTH - 1));
    field.append(".");
    return (field);
}


void showContacts(Contact *contacts[], int nbr_contacts)
{
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;

    std::cout << std::setw(FIELD_WITDTH);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < nbr_contacts; i++)
    {
        first_name = contacts[i]->getFirstName();
        last_name = contacts[i]->getLastName();
        nickname = contacts[i]->getNickName();

        std::cout << "|" << std::setw(FIELD_WITDTH) << i;
        first_name = (first_name.length() > FIELD_WITDTH) ? \
            truncateContact(first_name) : first_name;
        std::cout << "|" << std::setw(FIELD_WITDTH) << first_name;

        last_name = (last_name.length() > FIELD_WITDTH) ? \
            truncateContact(last_name) : last_name;
        std::cout << "|" << std::setw(FIELD_WITDTH) << last_name;

        nickname = (nickname.length() > FIELD_WITDTH) ? \
            truncateContact(nickname) : nickname;
        std::cout << "|" << std::setw(FIELD_WITDTH) << nickname;
        std::cout << "|" << std::endl;
    }
    ft_search(contacts, nbr_contacts);
}

int main(void)
{
	int i;
	i = 0;
	Contact  *contacts[i];
	std::string command;
	std::cout <<"Available commands are ADD, SEARCH and EXIT" << std::endl;
	
	while(1)
	{
		std::cout <<"Please enter a command: ";
		getline(std::cin, command, '\n');
		if(!command.compare("EXIT"))
			break;
		if(!command.compare("ADD"))
		{
			if(i < MAX_CONTACTS)
			{
				contacts[i++] = addContact();
			}
			else
			{
				std::cout << "The contact list is full" << std::endl;
			}
		}
		if(!command.compare("SEARCH"))
		{  
			if(i <= 0)
			{
				std::cout << "There are no contacts to show" << std::endl;
			}
			else
			{
				showContacts(contacts, i);
			}
		}
	}
	return (0);
}


