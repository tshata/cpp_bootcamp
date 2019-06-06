/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:44:44 by tshata            #+#    #+#             */
/*   Updated: 2019/06/05 16:53:59 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){return;}
Contact::~Contact(void) {return;}

//getters
std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}

std::string Contact::getLogin(void)
{
	return (this->login);
}

std::string Contact::getNickName(void)
{
	return (this->nickName);
}

std::string Contact::getBirthDate(void)
{
	return (this->birthDate);
}
std::string Contact::getPostalAddress(void)
{
	return (this->postalAddress);
}

std::string Contact::getEmailAddress(void)
{
	return (this->emailAddress);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string Contact::getFavoriteMeal(void)
{
	return (this->favoriteMeal);
}

std::string Contact::getUnderWearColor(void)
{
	return (this->underwearColor);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

//setters
void Contact::setFirstName(std::string str)
{
	this->firstName = str;
	return;
}

void Contact::setLastName(std::string str)
{
	this->lastName = str;
	return;
}

void Contact::setNickName(std::string str)
{
	this->nickName = str;
	return;
}

void Contact::setLogin(std::string str)
{
	this->login = str;
	return;
}

void Contact::setPostalAddress(std::string str)
{
	this->postalAddress = str;
	return;
}

void Contact::setEmailAddress(std::string str)
{
	this->emailAddress = str;
	return;
}

void Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
	return;
}

void Contact::setBirthDate(std::string str)
{
	this->birthDate = str;
	return;
}

void Contact::setFavoriteMeal(std::string str)
{
	this->favoriteMeal = str;
	return;
}

void Contact::setUnderWearColor(std::string str)
{
	this->underwearColor = str;
	return;
}

void Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
	return;
}
