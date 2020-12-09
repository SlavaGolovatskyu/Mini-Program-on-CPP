#ifndef LIST_H_
#define LIST_H_

#include <iostream>

using namespace std;

struct Author
{
    int age;
    string name;
    string book_name;
    string file_name;
    void show()
    {
        cout << "Age:\t" << age << "\n";
        cout << "Name:\t" << name << "\n";
        cout << "Book name:\t" << book_name << "\n";
    }
};

#endif
