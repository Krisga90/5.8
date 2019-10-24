#include <iostream>
#include <string>
#include <cstring>

int main()
{
	/*
	//zad 9. 1 sposob za pomoca string;
	{
		std::string nazwa;
		std::cout << "Program kopiuje napisy do czasu wpisania \"gotowe\"\n";
		std::cin >> nazwa;
		while (nazwa!="gotowe")
		{
			std::cout << nazwa<<" ";
			std::cin >> nazwa;
		}
	}
	*/
	//zad 8. 2 sposob za pomoca char[];
	{
		char* nazwa = new char;
		std::cout << "Program kopiuje napisy do czasu wpisania \"gotowe\"\n";
		std::cin >> nazwa;
		while (strcmp(nazwa, "gotowe"))
		{
			std::cout << nazwa << " ";
			std::cin >> nazwa;
		}
	}
	std::cin.get();
	std::cin.get();
	return 0;
}