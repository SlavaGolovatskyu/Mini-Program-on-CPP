#ifndef READ_DATA_H
#define READ_DATA_H

void readAllInformation()
{
	string s;
	ifstream fout("test.txt");
	if (fout.is_open())
	{
		int i = 0;
		while (getline(fout, s))
		{
			cout << "[" << i + 1 << "] - " << s << ',' << endl;
			i++;
		}
	}
	else
		cout << "Error: The file was not opened.";
	fout.close();
}
#endif
