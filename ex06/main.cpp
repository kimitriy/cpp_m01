#include "Karen.hpp"

int	main(int argc, char **argv)
{
	class Karen karenInstance;

	if (argc != 2)
		std::cout << FGRND_R_RED << "Wrong number of arguments! Make sure you have exactly one!" << RESET << std::endl;
	else
	{
		std::string	lvl(argv[1]);
		karenInstance.filter(lvl);
	}
	return (0);
}