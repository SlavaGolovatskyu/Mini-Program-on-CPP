#include <iostream>
/* 
 Використовують для кращого розуміння коду.
 Як працює typedef? Ти за допомогою typedef ініціалізуєш переміну як зазвичай
 int testScore_t; Допустим. Але Це використовується для більшого зрозуміння що виводить функція.
 Допустимо ми створили функцію int GradeTest() Що вона виводить? Ціле число. Так але.
 Інші можуть догадуватись. Наприклад подумають що воно виводить кількість питань.
 Чи код помилки. Але цим typedef int testScore_t; ми пояснюємо що виводиму оцінку/результат тесту.   
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

// using testScore_t = double; Можна замінити нижню строку на цю якщо ви використовуєте С++11
typedef int testScore_t; 

testScore_t GradeTest()
{
    return 143;
}

