#ifndef
# define
#include <iostream>

class FragTrap {
	private:
	int		hit_points;
	int		max_points;
	int		energy_points;
	int		level;
	std::string	name;
	int		melee_attack_dmg;
	int		ranged_attack_dmg;
	int		armor_dmg_rdt;

	public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap &obj);
	virtual ~FragTrap(void);
	FragTrap &operator=(const FragTrap &rhs);

	rangedAttack(std::string const & target);
	meleeAttack(std::string const & target);
	takeDamage(unsigned int amount);
	beRepaired(unsigned int amount);

};

#endif
