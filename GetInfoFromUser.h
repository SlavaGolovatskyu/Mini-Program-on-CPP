#ifndef GET_DATA_H
#define GET_DATA_H

#include <iostream>
#include "structs.h"
#include "writeInfoInUserFile.h"

using namespace std;

void writeInformationInStruct()
{
	Author a;
	cout << "Enter age:\t";
	cin >> a.age;
	cin.ignore(32767, '\n');
	cout << "Enter name:\t";
	getline(cin, a.name);
	cout << "Enter name book:\t";
	getline(cin, a.book_name);
	a.show();
	writeData(a.age, a.name, a.book_name);
}
#endif
