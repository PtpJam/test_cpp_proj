// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "C_Pencil.h"
#include "C_Pencil_Red.h"

int main()
{
	C_Pencil pencil;
	pencil.draw(std::cout, "aaaaa **** aaaa");

	C_Pencil_Red pencil_red;
	pencil_red.draw(std::cout, "red text");


	system("pause");
}
