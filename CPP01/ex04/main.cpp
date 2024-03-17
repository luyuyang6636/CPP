/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:42:27 by luyang            #+#    #+#             */
/*   Updated: 2024/03/17 23:03:00 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void	replaceFile(std::string file, std::string s1, std::string s2)
{
	std::fstream	old_file;
	std::fstream	new_file;
	std::string	line;
	std::string	tmp;
	int		last = 0;
	size_t		i;

	old_file.open(file.c_str(), std::ios::in);
	new_file.open(std::string(file + ".replace"), std::ios::out);

	if (!old_file)
		std::cout << "Failed to open original file" << std::endl;
	else if (!new_file)
		std::cout << "Failed to open output file" << std::endl;
	else
	{
		while (getline(old_file, line))
		{
			last = 0;
			while ((i = line.find(s1, last)) != std::string::npos)
			{
				tmp = line.substr(i + s1.size());
				line.erase(i);
				line += s2 + tmp;
				last = i + s2.size();
			}
			new_file << line;
			if (!old_file.eof())
				new_file << std::endl;
		}
	}
	old_file.close();
	new_file.close();
}
 int	main(int argc, char **argv)
 {
	if (argc != 4)
		std::cout << "You can only enter 3 arguments -> filename"
			<< ", string to replace, what to replace the string with." << std::endl;
	else if (!argv[2][0] || !argv[3][0])
		std::cout << "The strings cannot be empty!";
	else
	{
		replaceFile(argv[1], argv[2], argv[3]);
	}
	return (0);
 }