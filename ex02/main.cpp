#include <iostream>
#include <string>
#include <iomanip>

#define RESET "\033[0m"
#define FGRND_R_GREEN "\033[0;32m"
#define FGRND_R_PURPLE "\033[0;35m"

int		main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain; //pointer
	std::string &stringREF = brain; //reference

	std::cout << FGRND_R_GREEN << "The string's address is: " << FGRND_R_PURPLE << &brain << RESET << std::endl;
	std::cout << FGRND_R_GREEN << "The string's address using stringPTR is: " << FGRND_R_PURPLE << stringPTR << RESET << std::endl;
	std::cout << FGRND_R_GREEN << "The string's address using stringREF is: " << FGRND_R_PURPLE << &stringREF << RESET << std::endl;
	std::cout << FGRND_R_GREEN << "The string itself using stringPTR: " << FGRND_R_PURPLE << *stringPTR << RESET << std::endl;
	std::cout << FGRND_R_GREEN << "The string itself using stringREF: " << FGRND_R_PURPLE << stringREF << RESET << std::endl;
	return (0);
}