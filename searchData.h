#ifndef SEARCH_DATA_H
#define SEARCH_DATA_H

#include <iostream>
#include <vector>

using namespace std;

void searchNeed(string needStr)
{
	string s;
	int count = 0;
	vector<string> result;
	ifstream fout("test.txt");
	if (fout.is_open())
	{

		while (getline(fout, s))
		{
			if (s.find(needStr) == string::npos)
				continue;
			else
			{
				result.push_back(s);
				count++;
			}
		}
		cout << "Found on your request: " << count << endl;
		if (count != 0)
			for (int i = 0; i < result.size(); i++)
				cout << result[i] << endl;
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
}

void startSearchNeed()
{
	string needStr;
	cout << "Enter name or book name or Author age for search: ";
	cin.ignore(32767, '\n');
	getline(cin, needStr);
	searchNeed(needStr);
}

#endif
