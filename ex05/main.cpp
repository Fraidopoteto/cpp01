#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl		Obj;
	std::string	level;
	bool		is_running = true;

	std::cout << "\n\n========EX05 TEST========\n\n";

	if (argc != 2)
	{
		std::string user_input;
		std::cout << "\nPlease enter level (DEBUG, INFO, WARNING, ERROR) or EXIT to quit: ";
		while (is_running)
		{
			std::getline(std::cin, user_input);

			level = user_input;
			if (user_input == "EXIT")
				is_running = false;
			else if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
			{
				Obj.complain(level);
				std::cout << "\nPlease enter level (DEBUG, INFO, WARNING, ERROR) or EXIT to quit: ";
			}
			else 
			{
				std::cout << "\nPlease enter a valid level (DEBUG, INFO, WARNING, ERROR) or EXIT to quit!: ";	
			}
		}

	}
	else
	{
		level = argv[1];
		Obj.complain(level);
	}
}
