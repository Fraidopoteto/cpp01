#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{

}

HumanB::~HumanB()
{
	
}

void	HumanB::attack()
{
	if (this->type)
		std::cout << this->name << " attacks with their " << this->type->getType() << "\n";
	else
		std::cout << this->name << " attacks with no weapon\n";
}

void	HumanB::setWeapon(Weapon &type)
{
	this->type = &type;
}