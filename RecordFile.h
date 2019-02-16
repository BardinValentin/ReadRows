#pragma once
#ifndef RECORDFILE
#define RECORDFILE

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string record = "record.txt";

void FileRecord(string *Arrall, int *pstoki){

	ofstream file;
	file.open(record);

	if (!file.is_open())
	{
		cout << "\nФайл не открыт\n\n" << endl;
	}
	else
	{
		cout << "\nФайл  открыт\n\n" << endl;

		for (int k = *pstoki - 1; k >= 0; k--)
		{
			file << Arrall[k] << endl;
		}
	}

	delete[] Arrall;
	file.close();
	
}


#endif // RECORDFILE