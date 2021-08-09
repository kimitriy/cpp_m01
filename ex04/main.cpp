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
	if (argv[1] == "\0" || argv[2] == "\0" || argv[3] == "\0")
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

int	main(int argc, char **argv)
{
	if (validator(argc, argv) == 1)
	{
		std::ifstream ifs(argv[1]);
		if (!ifs)
			return (err_message("Unable to open file or the file doesn't exist."));
		std::string newName = toUpperCase(argv[1]);
		newName += ".replace";
		std::ofstream ofs(newName);
		if (!ofs)
			return (err_message("Unable to create file."));
		
		std::string str1 = argv[2];
		std::string str2 = argv[3];
	}
	else
		return (err_message("Please check arguments more thoroughly!"));
	return (0);
}