// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#ifndef IOSTREAM
#include <iostream>
using namespace std;
#endif 

#ifndef TEXT_H
#include "text.h"
#endif

#ifndef SPECIAL_H
#include "special.h"
#endif 

#ifndef SPECIAL1_H
#include "special1.h"
#endif

void task1() {
	char** text = text::create(char());
	int* textLen = new int(0);
	cout << "Task1" << endl;
	cout << "Enter text: "<<endl;
	text::enterText(text, *textLen);
	cout << "Result: "<<endl;
	showWordsWithoutNumbers(text, *textLen);
	delete textLen;
	text::del(text);
}

void task2() {
	string* text = text::create(string());
	int* textLen = new int(0);
	cout << "Task2"<<endl;
	cout << "Enter text: "<<endl;
	text::enterText(text, *textLen);
	cout << "Result: " << endl;
	sortWordsInText(text, *textLen);
	delete textLen;
	text::del(text);
}

int main()
{	
	string *isToContinue= new string("+");
	while (*isToContinue != "-") {
		if (*isToContinue == "+") {
			task1();
			cout << endl;
			task2();
			cout << endl;
		}
		cout << " to continue inser '+', to end insert'-'";
		cin >> *isToContinue;
	}
	delete isToContinue;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
