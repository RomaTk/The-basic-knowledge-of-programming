// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>

#ifndef ARRAY_H
#include "array.h"
#endif

#ifndef SPECIAL_H
#include "special.h"
#endif


using namespace std;

void show(int& element) {
	cout << element << "  ";
	return;
}



int input(int position) {
	int k;
	cout << "Input number:";
	cin >> k;
	return k;
}



int* L = new int(0);
bool rule(const int& value) {
	if (value > * L) {
		return false;
	}
	else {
		return true;
	}
}

int main()
{
	
	string* isToContinue = new string("+");
	int* n = new int(0);
	int* newN = new int(0);
	while (*isToContinue != "-") {
		if (*isToContinue == "+") {
			//range of array 
			
			cout << "Enter the range of array: ";
			cin >> *n;

			cout << "Enter L: ";
			cin >> *L;


			//main array
			int* arr = arrayFuntions::create(*n, int());
			int* newArray; 


			arr = arrayFuntions::fill(arr, *n, input);

			cout << "Array was: ";
			arr = arrayFuntions::doWithEachElement(arr, *n, show);
			cout << endl;

			
			clear(arr, *n, rule, &newArray, &newN);
			cout << "Array is: ";
			arrayFuntions::doWithEachElement(newArray, *newN, show);
			sort(newArray, newArray + *newN);


			arrayFuntions::del(newArray);
			arrayFuntions::del(arr);
		}
		cout << endl << "Type + to continue or - to end the program ";
		cin >> *isToContinue;
	}
	delete newN;
	delete n;
	delete L;
	delete isToContinue;
	return 0;
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
