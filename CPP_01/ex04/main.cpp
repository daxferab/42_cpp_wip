#include <string>
#include <iostream>
#include <fstream>

void	replaceString(std::ifstream &file, std::ofstream &newFile, std::string substring, std::string replacement)
{
	std::string	line;
	std::string newline;
	int			stringlen = substring.length();
	int			pos = 0;

	while (getline(file, line))
	{
		if (!line[0])
		{
			newFile << line << std::endl;
			continue;
		}
		while (!line.empty())
		{
			if (line.find(substring) == (long unsigned int)-1)
			{
				newline.append(line);
				break;
			}
			pos = line.find(substring);
			newline.append(line, 0, pos);
			newline.append(replacement);
			line = line.substr(pos + stringlen);
		}
		newFile << newline << std::endl;
		stringlen = substring.length();
		pos = 0;
		newline.clear();
	}
}

int	main(int argc, char* argv[])
{
	if (argc != 4)
		return (std::cout << "You must enter 3 arguments" << std::endl, 1);

	std::ifstream	file(argv[1]);
	if (file.fail())
	{
		std::cout << "Failed to open file" << std::endl;
		return (1);
	}

	std::string newFilename = std::string(argv[1]) + ".replace";
	std::ofstream newFile(newFilename.c_str());
	if (newFile.fail())
	{
		std::cout << "Failed to create new file" << std::endl;
		file.close();
		return (1);
	}
	//REST OF THE CODE
	replaceString(file, newFile, argv[2], argv[3]);
	file.close();
	newFile.close();
}
