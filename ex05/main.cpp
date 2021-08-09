#include "Karen.hpp"

int	main()
{
	class Karen karenInstance;

	karenInstance.complain("DEBUG");
	std::cout << std::endl;
	karenInstance.complain("INFO");
	std::cout << std::endl;
	karenInstance.complain("WARNING");
	std::cout << std::endl;
	karenInstance.complain("ERROR");
	std::cout << std::endl;
	karenInstance.complain("blabla");
	return (0);
}