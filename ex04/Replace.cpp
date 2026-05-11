#include "Replace.hpp"

static void	_replace(std::string line, std::string filename, std::string s1, std::string s2)
{
	std::string new_filename = filename + ".replace";
	std::ofstream new_file(new_filename.c_str());

	std::string	modified_line;
	std::string	temp;

	size_t		len = strlen(s1.c_str());
	const char	*found;

	int i = 0;

	found = strstr(line.c_str(), s1.c_str());
	if (!found)
		new_file << modified_line << "\n";
	else
	{
		temp = line.substr(found + len);
	}
}

void	open_file(std::string filename, std::string s1, std::string s2)
{
	std::string line;
	std::ifstream file;

	file.open(filename.c_str());

	std::cout << s1 << s2;

	while(std::getline(file, line))
		_replace(line, filename, s1, s2);

	file.close();
}
