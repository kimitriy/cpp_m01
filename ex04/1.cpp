#include <iostream>
#include <string>
#include <fstream>

int static error(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string str1(argv[2]);
		std::string str2(argv[3]);
		if (argv[2][0] == '\0' || argv[3][0] == '\0')
			return(error("Check your strings, they must not be empty!"));
		else
		{
			std::ifstream ifs(argv[1]);
			if(!ifs)
				return(error("Oh, it is impossible to read from this file."));
			std::string new_name(argv[1]);
			int i = 0;
			while(new_name[i])
			{
				new_name[i] = toupper(new_name[i]);
				i++;
			}
			new_name += ".replace";
			std::ofstream ofs(new_name);
			if(!ofs)
				return(error("Oh, it is impossible to create new folder."));
			
            
            std::string minitemp;
			int len;
			len = str1.length();
			i = 0;
			while(std::getline(ifs, minitemp))
			{
				if (str1.compare(str2) != 0)
				{
					std::size_t found = minitemp.find(str1);
					while(found!=std::string::npos)
					{
						minitemp.erase(found, len);
						minitemp.insert(found, str2);
						found = minitemp.find(str1);
		 			}
				}
				ofs << minitemp;
				if (ifs.eof())
					return(0);
				ofs << std::endl;
				i++;
			}
			ifs.close();
			ofs.close();
		}
	}
	else
		return(error("Please, check 3 arguments: the name of the file, string for reaplacing and new string!"));
	return(0);
}