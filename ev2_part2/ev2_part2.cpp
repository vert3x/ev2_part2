// ev2_part2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//programa de calificaciones
//velazquez 2920582
//https://github.com/vert3x/ev2_part2 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <locale.h>
#include <fstream>
#include <vector>
#include <sstream>


; using namespace std;

void getFile(string file, vector<string>& name) // letras y numeros
{			cout << "-calificaciones-" << endl;
	ifstream infile(file);
	if (infile) 
	{
		string endlin;
		while (getline(infile, endlin)) {
			istringstream is(endlin);
			string value;

			while (is >> value) 
			{
				cout << " " << value << " ";
			}
			//fin loop
			cout <<" "<<endl;
		}
	}

	cout << endl << endl;
}

int sumadecalif()
{

   ifstream inFile;
    char filename[10];
 
 inFile.open("file.txt");
  
   ofstream outFile("resultados.txt");
   string line;
   string line2;
  
   while (getline(inFile, line))
   {
   // if (line.empty()) 
 //continue;

    istringstream iss(line);
	float sum = 0;
	float next = 0;
	float avg = 0;
	float suma2 = 0;
	float next2 = 0;
	float lilnum=0;
	while (iss >> next)
		sum += next;
		avg = sum/6;
	outFile << "suma de calificaciones: "  << sum << endl;//salida a archivo
	outFile << "promedio personal:       " << avg << endl;//salida a archivo
	

   }

   inFile.close();
   outFile.close();
  
  
  return 0;
}

int main() {
	vector<string> name;
	getFile("file.txt", name);
	sumadecalif();
	//promediopers();
}
