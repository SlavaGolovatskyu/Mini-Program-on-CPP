#include <iostream>
/* 
 �������������� ��� ������� �������� ����.
 �� ������ typedef? �� �� ��������� typedef ��������� ������� �� ��������
 int testScore_t; ��������. ��� �� ��������������� ��� ������� ��������� �� �������� �������.
 ��������� �� �������� ������� int GradeTest() �� ���� ��������? ֳ�� �����. ��� ���.
 ���� ������ ������������. ��������� ��������� �� ���� �������� ������� ������.
 �� ��� �������. ��� ��� typedef int testScore_t; �� ��������� �� �������� ������/��������� �����.   
*/

using namespace std;

struct Student
{
	int age;
	float priceForLessons;
	string name;	
};


void CreateInfoOfStudent()
{
	Student sasha = {21, 21000.0, "Sasha"};
	Student slavik = {23, 31000.0, "Slavik"};
	
	cout << sasha.age << " " << sasha.priceForLessons
		 << " " << sasha.name << endl;;
	cout << slavik.age << " " << slavik.priceForLessons
		 << " " << slavik.name << endl;
}

// using testScore_t = double; ����� ������� ����� ������ �� �� ���� �� ������������� �++11
typedef int testScore_t; 

testScore_t GradeTest()
{
    return 143;
}

