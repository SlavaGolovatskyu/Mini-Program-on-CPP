#include <iostream>
#include "searchData.h"
#include "structs.h"
#include "readInfoAll.h"
#include "GetInfoFromUser.h"
#include "writeInfoInUserFile.h"

using namespace std;

void choice();
void inputAuthor(char result);

int main()
{
	choice();
    system("pause");
    return 0;
}

void choice()
{
	while (true)
	{
		char result;
	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	    cout << "[0] write 0 if you want exit from app\n";
	    cout << "[1] write 1 if you want write informarmaion of your author book\n";
	    cout << "[2] write 2 if you want read all information\n";
	    cout << "[3] write 3 if you want found information\n";
	    cin >> result;
	    if (isdigit(result))
	    	if (result == '0')
	    		break;
	    	else
			{
	    		system("cls");
	    		inputAuthor(result);
	    	}
	    else
	    	cout << "Error: you wrote a letter or symbol instead of a number.";
	}
}

void inputAuthor(char result)
{
	if (result == '1')
	{
		system("cls");
	    writeInformationInStruct();	
	}
	else if (result == '2')
	{
		system("cls");
		readAllInformation();
	}
	else if (result == '3')
	{
		system("cls");
		startSearchNeed();
	}
	else
		cout << "This operation is not.";
}




