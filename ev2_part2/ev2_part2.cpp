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

void getFile(string file, vector<int>& averages) 
{
	ifstream infile(file);
	if (infile) {
		string line;
		while (getline(infile, line)) {
			istringstream is(line);
			int value;
			while (is >> value) {
				cout << "calificacion " << value <<"  ";
			}
			cout << endl;
		}
	}
}

int main() {
	vector<int> averages;
	getFile("file.txt", averages);




}
