#include "Replace.hpp"

int main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	std::cout << "\n\n========EX04 TEST========\n\n";

	if (argc != 4)
	{
		std::string user_input;

		std::cout << "\nPlease enter 3 parameters.\n";

		std::cout << "\n filename: ";
		std::getline(std::cin, user_input);
		filename = user_input;

		std::cout << " string 1: ";
		std::getline(std::cin, user_input);
		s1 = user_input;

		std::cout << " string 2: ";
		std::getline(std::cin, user_input);
		s2 = user_input;

		std::cout << "\n\n";
	}
	else
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
	}
	open_file(filename, s1, s2);
}
