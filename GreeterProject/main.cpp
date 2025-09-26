#include <iostream>
#include <Windows.h>

#include "GreeterStaticLibrary.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string name{};

	std::cout << "¬ведите им€: ";
	std::cin >> name;

	std::cout << GreeterStaticLibrary::Greeter::greet(name) << std::endl;

	return EXIT_SUCCESS;
}