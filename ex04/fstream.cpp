#include <iostream>
#include <string>
#include <fstream>

int		main()
{
	// using namespace std;
 
	// Класс ofstream используется для записи данных в файл.
	// Создаем файл SomeText.txt
	std::ofstream outf("SomeText.txt");
 
	// Если мы не можем открыть этот файл для записи данных,
	if (!outf)
	{
		// то выводим сообщение об ошибке и выполняем функцию exit()
		std::cerr << "Uh oh, SomeText.txt could not be opened for writing!" << std::endl;
		exit(1);
	}
 
	// Записываем в файл следующие две строки
	outf << "See line #1!" << std::endl;
	outf << "See line #2!" << std::endl;
 
	return 0;
}