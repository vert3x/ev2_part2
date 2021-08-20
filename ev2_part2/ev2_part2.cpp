// ev2_part2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//programa de calificaciones
//velazquez 2920582

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <Windows.h>
#include<locale.h>
#include <fstream>

using namespace std;






int main()
{
	fstream file;
	file.open("file.txt", ios::in);

	if (!file) {
		cout << "ERROR FILE NO ENCONTRADO";
	}
	else {
		char ch;

		while (50) {
			file >> ch;
			if (file.eof())
				break;

			cout << ch;
		}

	}
	file.close();
	return 0;

}

