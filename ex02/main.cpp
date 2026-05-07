#include <iostream>
#include <string>

int main()
{
	std::cout << "\n\n========EX02 TEST========\n\n";

	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "\n---MEMORY ADDRESSES---\n";

	std::cout << " Address of string:    " << &str << "\n";
	std::cout << " Address of stringPTR: " << stringPTR << "\n";
	std::cout << " Address of stringREF: " << &stringREF << "\n";

	std::cout << "\n--------VALUES--------\n";

	std::cout << " Value of string:    " << str << "\n";
	std::cout << " Value of stringPTR: " << *stringPTR << "\n";
	std::cout << " Value of stringREF: " << stringREF << "\n\n";
}