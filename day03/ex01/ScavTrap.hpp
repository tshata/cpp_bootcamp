/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:06:26 by tshata            #+#    #+#             */
/*   Updated: 2019/06/08 17:19:15 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
class ScavTrap {

public:
    ScavTrap(void);

    ScavTrap(std::string);

    ScavTrap(ScavTrap const &);

    ScavTrap &operator=(ScavTrap const &);

    ~ScavTrap(void);

    void setHitPoints(int);

    void setMaxHitPoints(int);

    void setEnergyPoints(int);

    void setMaxEnergyPoints(int);

    void setLevel(int);

    void setName(std::string name);

    void setMeleeAttackDamage(int);

    void setRangedAttackDamage(int);

    int getHitPoints(void) const ;

    int getMaxHitPoints(void) const ;

    int getEnergyPoints(void) const ;

    int getMaxEnergyPoints(void) const;

    int getLevel(void) const;

    int getMeleeAttackDamage(void) const;

    int getRangedAttackDamage(void) const;

    int getArmorAttackReduction(void) const;

    std::string getName(void) const;

    void rangedAttack(std::string const &target);

    void meleeAttack(std::string const &target);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);

    void challengeNewcomer(std::string const &target);

private:
    int _hit_points;
    int _max_hit_points;
    int _energy_points;
    int _max_energy_points;
    int _level;
    std::string _name;
    int _melee_attack_damage;
    int _ranged_attack_damage;
    int _armor_attack_reduction;
};

#endif //DAY03_SCAVTRAP_HPP
