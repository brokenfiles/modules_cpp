/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 11:01:30 by louis             #+#    #+#             */
/*   Updated: 2020/07/24 11:01:30 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"

int	FileHandler::write_to_file(std::string newContent)
{
	std::ofstream file;
	file.open(to_file, std::ios::out | std::ios::in | std::ios::trunc);
	if (!file.is_open()) {
		throw "can't create new file";
	}
	file << newContent;
	file.close();
	return (0);
}

int FileHandler::file_exists()
{
	std::ifstream f(filename);
	return (f.good());
}

FileHandler::FileHandler(std::string filename, std::string to_file): filename(filename), to_file(to_file)
{}

std::string FileHandler::get_file_content()
{
	std::string content;

	if (!file_exists()) {
		throw "the program cannot access this file";
	}
	std::ifstream file;
	file.open(filename);
	if (!file.is_open()) {
		throw "this file cannot be opened";
	} else {
		std::getline(file, content, '\0');
	}
	file.close();
	return (content);
}

int		FileHandler::write_new_file(std::string to_find, std::string to_replace)
{
	std::string	newString;
	size_t		index = 0;

	try {
		while (true) {
			index = content.find(to_find, index);
			if (index == std::string::npos) break;
			content.replace(index, to_find.size(), to_replace);
			index += to_replace.size();
		}
		write_to_file(content);
	} catch (const char *e) {
		std::cout << "An exception occurred : " << e << std::endl;
	}
	return (0);
}

void	FileHandler::setContent(std::string content)
{
	this->content = content;
}