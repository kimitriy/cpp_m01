#include <iostream>
#include <string>


const std::string	toUpperCase(const std::string &str)
{
	std::string tmp;
	int	i = 0;

	while(str[i])
	{
		tmp.push_back(static_cast<char>(toupper(str[i])));
		i++;
	}
	return (tmp);
}


int		main()
{
	std::string str1 = "qwerty";

	// str1.push_back('w');
	// std::cout << str1 << std::endl;

	std::cout << toUpperCase(str1) << std::endl;
	return (0);
}