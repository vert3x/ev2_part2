// ev2_part2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//programa de calificaciones
//velazquez 2920582
//hay que crear un archivo llamado file.txt en la carpeta raiz del proyecto
//https://github.com/vert3x/ev2_part2 apenas trato de implementar github a mis trabajos


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

void getFile(string file, vector<string>& name) //matriz de calificaciones
{		


	cout << "-calificaciones-" << endl;
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

int sumadecalif()//procesos sumas y promedios
{

   ifstream inFile;

 inFile.open("file.txt", ios_base::app);
 if (!inFile)
 {
	 cerr << "File file.txt not found." << endl;
	 return -1;
 }
   ofstream out("promedios personales.txt");
   string line;
   string line2;
   istringstream iss(line);
   istringstream is(line2);
  
   while (getline(inFile, line))//loop de operaciones
   {
	   istringstream iss(line);
	   float sum = 0;
	   float next = 0;
	   float avg = 0;
	   float avgtot = 0;
	   float sumavgtot = 0;
	   float suma2 = 0;
	   float lilnum = 0;
	   int nom = 1;
	   int i = 0;

	   	
			while (iss >> next)//iss sea mayor que next seguira arrojando los datos del txt

	 	 sum = sum + next;
	     avg = sum / 6;
	  
	   

	   out << "alumno #" << nom << endl;
	   out << "suma de calificaciones: " << sum << endl;//salida a archivo
	   out << "promedio personal:       " << avg << endl;//salida a archivo

	   if (avg >= 7)
	   {
		   out << "alumno aprobado, promedio mayor a 7" << endl;
		   out << "_______________________" << endl;
	   }
	   else
	   {
		   out << "alumno reprobado, promedio menor a 7" << endl;
		   out << "_______________________" << endl;
	   }


   }




  
  
  return 0;
}

int prom()
{
	ifstream inFile;

	inFile.open("file.txt", ios_base::app);

	ofstream out("promedios grupo.txt");
	string line;

	istringstream iss(line);



	float sum = 0;
	float sum1 = 0;
	float sum2 = 0;
	float sum3 = 0;
	float sum4 = 0;
	float sum5 = 0;
	float sum6 = 0;
	float sum7 = 0;
	float next = 0;
	float avg = 0;
	float avgtot = 0;
	float sumavgtot = 0;
	float suma2 = 0;
	float lilnum = 0;
	int nom = 1;
	int i = 0;
 while  (getline(inFile,line))
	{


		out << " " << line;
		line = sum;
		avgtot = sum/42;
		out << "promedio :" << avgtot;

	}














	return(0);
}

int to_do()
{
	ifstream inFile;

	inFile.open("file.txt", ios_base::app);
	if (!inFile)
	{
		cerr << "File file.txt not found." << endl;
		return -1;
	}
	ofstream out("to_do.txt");
	string line;

	istringstream iss(line);


	out << "el programa le falta:" << endl;
	out << "promedio grupal" << endl;
	out << "max promedio individual" << endl;



	return(0);
}

int main()
{
	vector<string> name;
	getFile("file.txt", name);

		sumadecalif();
		to_do();
		prom();


	return 0;
}
