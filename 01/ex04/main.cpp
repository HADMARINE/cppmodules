/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:05:46 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 15:30:10 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void action(
        std::string filename,
        std::string s1,
        std::string s2
) {
    std::ifstream ifile;
    ifile.open(filename.c_str());
    if (!ifile.is_open())
    {
        std::cout << "Error: File not found, quitting..." << std::endl;
        return ;
    }
    std::ofstream ofile;
    ofile.open(filename.append(".replace").c_str());
    if (!ofile.is_open())
    {
        ifile.close();
        std::cout << "Error: File not found, quitting..." << std::endl;
        return ;
    }
    std::string content;
    if (!std::getline(ifile, content, '\0'))
    {
        std::cout << "Error: File is empty, quitting..." << std::endl;
        ifile.close();
        ofile.close();
        return ;
    }
    while (content.find(s1) != std::string::npos)
        content.replace(content.find(s1), s1.length(), s2);
    ofile << content;
    ofile.close();
    ifile.close();
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Error: Provide argument correctly, quitting..." << std::endl;
        return (1);
    }
    action(argv[1], argv[2], argv[3]);
    return (0);
}