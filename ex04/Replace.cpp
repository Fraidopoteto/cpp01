#include "Replace.hpp"

static void	_replace(std::ofstream &new_file, std::string line, std::string &s1, std::string &s2)
{
	size_t start_pos = 0;
	size_t found_pos;

	while ((found_pos = line.find(s1, start_pos)) != std::string::npos)
	{
		new_file << line.substr(start_pos, found_pos - start_pos);
		new_file << s2;
		start_pos = found_pos + s1.length();
	}

	new_file << line.substr(start_pos) << "\n";
}

void	open_file(std::string filename, std::string s1, std::string s2)
{
	if (s1.empty())
		return;

	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file.\n";
		return;
	}

	std::string new_filename = filename + ".replace";
	std::ofstream new_file(new_filename.c_str());
	if (!new_file.is_open())
	{
		std::cerr << "Error: Could not create file.\n";
		file.close();
		return;
	}

	std::string line;
	while (std::getline(file, line))
	{
		_replace(new_file, line, s1, s2);
	}

	file.close();
	new_file.close();
}
