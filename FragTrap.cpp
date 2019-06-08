#include "FragTrap.hpp"

FragTrap(void): hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100), level(1), name(FR4G-TP),melee_attack_dmg(30), ranged_melee_attack_dmg(20), armor_dmg_rdt(5)
{
	std::cout << "Default Constructor Called";
	return;
}

FragTrap(std::string name): hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100), level(1), name(FR4G-TP),melee_attack_dmg(30), ranged_melee_attack_dmg(20), armor_dmg_rdt(5)
{
	std::cout << "Copy COnstructor Called";
	return;
}
