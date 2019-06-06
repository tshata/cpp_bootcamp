/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:15:30 by tshata            #+#    #+#             */
/*   Updated: 2019/06/05 16:53:45 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;
const int FIELD_WITDTH = 10;

class    Contact
{
public:
    Contact(void);
    ~Contact(void);
    void            setFirstName(std::string);
    void            setLastName(std::string);
    void            setNickName(std::string);
    void            setLogin(std::string);
    void            setPostalAddress(std::string);
    void            setEmailAddress(std::string);
    void            setPhoneNumber(std::string);
    void            setBirthDate(std::string);
    void            setFavoriteMeal(std::string);
    void            setUnderWearColor(std::string);
    void            setDarkestSecret(std::string);
    std::string     getFirstName(void);
    std::string     getLastName(void);
    std::string     getNickName(void);
    std::string     getLogin(void);
    std::string     getPostalAddress(void);
    std::string     getEmailAddress(void);
    std::string     getPhoneNumber(void);
    std::string     getBirthDate(void);
    std::string     getFavoriteMeal(void);
    std::string     getUnderWearColor(void);
    std::string     getDarkestSecret(void);

private:
    std::string     firstName;
    std::string     lastName;
    std::string     nickName;
    std::string     login;
    std::string     postalAddress;
    std::string     emailAddress;
    std::string     phoneNumber;
    std::string     birthDate;
    std::string     favoriteMeal;
    std::string     underwearColor;
    std::string     darkestSecret;
};

Contact             *addContact(void);
void                showContacts(Contact contacts[], int contact_index);

#endif
