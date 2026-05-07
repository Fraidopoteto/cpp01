#include "Zombie.hpp"

Zombie::Zombie()
{

}
Zombie::~Zombie() 
{
    std::cout << name << " deleted\n";
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
