/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:32:28 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/10 14:44:26 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Wrong format argument..." << std::endl;
	else
	{
		std::fstream infile(argv[1], std::ios::in);
		if (!infile.is_open())
		{
			std::cout << "Error: File not opened" << std::endl;
			return (1);
		}

		std::string	outfile_name = argv[1];
		// outfile_name = outfile_name.substr(0, outfile_name.find("."));
		outfile_name += ".replace";
		std::fstream outfile(outfile_name, std::ios::out | std::ios::trunc);
		if (!outfile.is_open())
		{
			infile.close();
			std::cout << "Error: Files to replace not created" << std::endl;
			return (1);
		}
		
		std::string buf;
		while (true)
		{
			std::getline(infile, buf);
			while (true)
			{
				std::size_t index = buf.find(argv[2]);
				if (index == std::string::npos)
				{
					outfile << buf;
					break;
				}
				outfile << buf.substr(0, index) << argv[3];
				buf = buf.substr(index + std::strlen(argv[2]));
			}
			if (infile.eof())
				break ;
			outfile << std::endl;
		}
		outfile.close();
		infile.close();
	}
	return (0);
}
