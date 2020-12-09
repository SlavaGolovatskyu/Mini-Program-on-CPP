#ifndef WRITE_DATA_H
#define WRITE_DATA_H

#include <iostream>
#include "structs.h"
#include <fstream>

using namespace std;

void writeData(int age, string name, string book)
{
	Author a;
	string forName = "Author: ", forAge = "Age: ", forBookName = "Book name: ";
	ofstream fout("test.txt", ios::out | ios::app);
	if (fout.is_open())
	{
		fout << '\"' << forAge << age << '\"' << " ";
		fout << '\"' << forName << name << '\"' << " ";
		fout << '\"' << forBookName << book << '\"';
		fout << endl;
		cout << "data written successfully" << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
}

#endif
