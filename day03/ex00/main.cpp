/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:29:17 by tshata            #+#    #+#             */
/*   Updated: 2019/06/08 17:08:36 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {

    FragTrap player1("Tsepo");;

    srand((unsigned int) time(NULL));

    {

        FragTrap player2("Tony Stark");

        std::cout << "FR4G-TP: " << player1.getName() << " starts off with " << player1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " starts off with " << player2.getEnergyPoints()
                  << " energy points" << std::endl;

        player1.meleeAttack(player2.getName());

        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());

        player1.takeDamage(player1.getRangedAttackDamage());

        std::cout << "FR4G-TP: " << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;

    }

    {

        FragTrap player2(player1);

        player2.setName("Shata");

        std::cout << "FR4G-TP: " << player1.getName() << " starts off with " << player1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " starts off with " << player2.getEnergyPoints()
                  << " energy points" << std::endl;

        player1.meleeAttack(player2.getName());

        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());

        player1.takeDamage(player1.getRangedAttackDamage());

        std::cout << "FR4G-TP: " << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;

    }

    {

        FragTrap player2 = player1;
        player2.setName("killer");

        std::cout << "FR4G-TP: " << player1.getName() << " starts off with " << player1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " starts off with " << player2.getEnergyPoints()
                  << " energy points" << std::endl;

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " has " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " has " << player2.getEnergyPoints() << " energy points"
                  << std::endl;

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " has " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " has " << player2.getEnergyPoints() << " energy points"
                  << std::endl;

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " has " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " has " << player2.getEnergyPoints() << " energy points"
                  << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;

    }

    {

        FragTrap player2;

        player2.setName("coder");
        std::cout << "FR4G-TP: " << player1.getName() << " starts off with " << player1.getEnergyPoints()
                  << " energy points, " << " hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " starts off with " << player2.getEnergyPoints()
                  << " energy points, " << " hit points " << player2.getHitPoints() << std::endl;

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        player1.meleeAttack(player2.getName());

        player2.takeDamage(player2.getMeleeAttackDamage());
        player2.takeDamage(player2.getMeleeAttackDamage());
        player2.takeDamage(player2.getMeleeAttackDamage());
        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;

    }


    return (0);

}
