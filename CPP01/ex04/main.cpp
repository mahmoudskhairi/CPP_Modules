/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:57 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:27:59 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "wrong input try again !" << std::endl;
        return(EXIT_FAILURE);
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string dest_file = av[1];
    std::ifstream SourceFile(dest_file.c_str());
    dest_file.append(".replace");
    std::ofstream DestinationFile(dest_file.c_str());
    std::string line;
    if (SourceFile.is_open() && SourceFile.is_open())
    {
        while (std::getline(SourceFile, line))
        {
            ssize_t index = line.find(s1, 0);
            while (index != -1)
            {
                if (index == -1) // std::string::npos == -1 means that s1 is not found!!
                {
                    index = 0;
                    break;
                }
                line.erase(index, s1.length());
                line.insert(index, s2);
                index = line.find(s1, index + s2.length());
            }
            DestinationFile << line + "\n";
        }
        SourceFile.close();
        DestinationFile.close();
    }
    else
        std::cout << "Sorry, once of the files doesn't open!";
}