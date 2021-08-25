#include "replace.hpp"

int		err_message(std::string err)
{
	std::cout << FGRND_R_RED << "Error! " << err << RESET << std::endl;
	return (0);
}

int		validator(int argc, char **argv)
{
	if (argc != 4)
		return (err_message("Wrong number of arguments."));
	if (argv[1] == '\0' || argv[2] == '\0' || argv[3] == '\0')
		return (err_message("Arguments must not be empty."));
	return (1);
}

const std::string	toUpperCase(const std::string &str)
{
	std::string tmp;
	int	i = 0;

	while(str[i])
	{
		tmp.push_back( static_cast<char>(toupper(str[i])) );
		i++;
	}
	return (tmp);
}

void	findAndReplace(std::string &text, std::string &str1, std::string &str2)
{
	int			len = str1.length();
	
	if (str1.compare(str2) == 0) //if str1 == str2 there is no point to do anything but just to output text without any changes at all
		return ;
	else
	{
		std::size_t found = text.find(str1);
		while (found != std::string::npos) //std::string::npos is what std::str.find() returns if no matches found
		{
			text.erase(found, len);
			text.insert(found, str2);
			found = text.find(str1); //iterates through matches of str1 in text
		}
	}
	return ;
}


void	processFile(std::ifstream & ifs, std::ofstream & ofs, std::string &str1, std::string &str2)
{
	std::string	tmp;
	
	while (ifs)
	{
		getline(ifs, tmp);
		findAndReplace(tmp, str1, str2);
		ofs << tmp << std::endl;
		if (ifs.eof()) //if EndOfFile has reached then break while
			break ;
	}	
	return ;
}

int	main(int argc, char **argv)
{
	if (validator(argc, argv) == 1)
	{
		std::ifstream ifs(argv[1]); //opens existing file with name argv[1], ifs - is an object of the ifstream class
		if (!ifs)
			return (err_message("Unable to open file or the file doesn't exist."));
		std::string newName = toUpperCase(argv[1]);
		newName += ".replace";
		std::ofstream ofs(newName); //creates and opens file with name newName, ofs - is an object of the ofstream class
		if (!ofs)
			return (err_message("Unable to create file."));
		std::string str1 = argv[2];
		std::string str2 = argv[3];
		processFile(ifs, ofs, str1, str2);
		ifs.close();
		ofs.close();
	}
	else
		return (err_message("Please check arguments more thoroughly!"));
	return (0);
}