#include "Zombie.hpp"

int main()
{
	std::string user_input;

	bool		is_running = true;

	std::cout << "\n\n========EX01 TEST========\n\n";

	while (is_running)
	{
		std::cout << "\nEnter a name to create a Zombie or EXIT to quit: ";
		std::getline(std::cin, user_input);

		if (user_input == "EXIT")
			is_running = false;
		else
		{
			std::string	name = user_input;
			bool 		valid_N = false;
			int long	N = 0;
	
			std::cout << "\nHow many Zombies do you want to create?: ";
			std::getline(std::cin, user_input);

			while (!valid_N)
			{
				char *end_ptr;
			
				N = std::strtol(user_input.c_str(), &end_ptr, 10);

				if (*end_ptr)
				{
					std::cout << "Please enter a valid number (above 0): ";
					std::getline(std::cin, user_input);		
				}
				else if (N > 0)
					valid_N = true;
				else
				{
					std::cout << "\nPlease enter a valid number (above 0): ";
					std::getline(std::cin, user_input);
				}
			}

			Zombie *zombieArray = zombieHorde(N, name);

			int i = 0;
			while (i < N)
			{
				std::cout << i << ".";
				zombieArray[i].announce();
				i++;
			}
			delete [] zombieArray;
		}
	}
}