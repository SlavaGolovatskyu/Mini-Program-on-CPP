#ifndef WRITE_DATA_H
#define WRITE_DATA_H

void writeData(int age, string name, string book)
{
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
