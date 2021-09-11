/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:17:01 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/11 14:38:58 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	// Check number of arguments
	if (ac != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}

	// Check if arguments are empty
	std::string	fileName = av[1];
	std::string	stringFind = av[2];
	std::string	stringReplace = av[3];
	if (fileName.empty() || stringFind.empty() || stringReplace.empty())
	{
		std::cerr << "One or more arguments are empty" << std::endl;
		return (1);
	}

	// Open file
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}

	// Create string with fileName + ".replace"
	char	*newFileName = new char[fileName.length() + 9];
	if (!newFileName)
	{
		std::cerr << "Error during memory allocation" << std::endl;
		ifs.close();
		return (1);
	}
	std::string	newFile = fileName + ".replace";
	std::strcpy(newFileName, newFile.c_str());

	// Open new file ".replace"
	std::ofstream	ofs(newFileName);
	if (!ofs.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		ifs.close();
		delete [] newFileName;
		return (1);
	}

	// Create string tmp containing the contents of the file
	std::string	content;
	std::string tmpFile;
	while (std::getline(ifs, content))
	{
		tmpFile += content;
		tmpFile += "\n";
	}

	// Read file and replace stringFind to stringReplace
	std::size_t	found = tmpFile.find(stringFind);
	while (found != std::string::npos)
	{
		tmpFile.erase(found, stringFind.length());
		tmpFile.insert(found, stringReplace);
		found = tmpFile.find(stringFind, found + stringReplace.length());
	}
	ofs << tmpFile;

	// Close files and clear memory allocation
	ifs.close();
	ofs.close();
	delete [] newFileName;

	return (0);
}
