/*
* Считывание строк из одного файла и запись в обратном порядке в другой файл
* (c) Проценко Михаил
*/
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "RecordFile.h"

using namespace std;

string str;
string read = "read.txt";
int stoki = 0;
string allstr;
int i = 0;

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	ifstream file_read;
	file_read.open(read);


	if (!file_read.is_open())
	{
		cout << "\nФайл не открыт\n\n" << endl;
	}
	else
	{
		cout << "Файл открыт:\n" << endl;

		while (!file_read.eof())
		{
			getline(file_read, str);
			cout << str << endl;
			stoki++;
		}
		file_read.close();
	}


	string *Arrall = new string[stoki];

	file_read.open(read);

	if (!file_read.is_open())
	{
		cout << "\nФайл не открыт\n\n" << endl;
	}
	else
	{
		cout << "Файл открыт:\n" << endl;

		while (!file_read.eof())
		{
			str = "";
			getline(file_read, str);
			Arrall[i] = str;
			i++;
		}
		file_read.close();
	}


	for (int i = 0; i < stoki; i++)
	{
		cout << "Arrall[] = " << i << " = " << Arrall[i] << "\n";
	}

	int *pstoki = &stoki;

	FileRecord(Arrall, &stoki);
}