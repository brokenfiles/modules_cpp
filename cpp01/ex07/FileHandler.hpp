#ifndef FILE_HANDLER__HPP
# define FILE_HANDLER__HPP

# include <iostream>
# include <fstream>

class FileHandler
{
private:
	std::string filename, to_file, content;

	int file_exists();

	int write_to_file(std::string newContent);

public:
	FileHandler(std::string filename, std::string to_file);

	std::string get_file_content(void);

	int write_new_file(std::string to_find, std::string to_replace);

	void setContent(std::string content);
};

#endif