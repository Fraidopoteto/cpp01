#include "Zombie.hpp"

int main()
{
	std::string user_input;

	bool		is_running = true;

	std::cout << "\n\n========EX00 TEST========\n\n";

	while (is_running)
	{
		std::cout << "\nEnter HEAP or STACK to create a Zombie or EXIT to quit: ";
		std::getline(std::cin, user_input);

		if (user_input == "HEAP")
		{
			std::cout << "\nEnter a Name: ";
			std::getline(std::cin, user_input);

			Zombie *heapZombie = newZombie(user_input);
			heapZombie->announce();

			delete heapZombie;
		}

		if (user_input == "STACK")
		{
			std::cout << "\nEnter a Name: ";
			std::getline(std::cin, user_input);

			randomChump(user_input);
		}

		if (user_input == "EXIT")
			is_running = false;
	}
}