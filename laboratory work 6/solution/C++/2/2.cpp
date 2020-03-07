// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


#ifndef MATRIX_H
#include "matrix.h"
using namespace matrixFunctions;
#endif // !MATRIX_H

#ifndef ARRAY_H
#include "array.h"
#endif

#ifndef SPECIAL_H
#include "special.h"
#endif

int input(int row,int column) {
	int k;
	cout << "Input number ("<<row+1<<", "<<column+1<<"): ";
	cin >> k;
	return k;
}

void show(double& element) {
	cout << element << "  ";
	return;
}

int main()
{
	int *rows = new int(4);
	int* columns = new int(5);
	int *columnMin = new int(0);
	int* columnMax = new int(0);
	int* rubish = new int(0);

	string* isToContinue = new string("+");
	while (*isToContinue != "-") {
		if (*isToContinue == "+") {
			int** matrix = create(*rows, *columns, int());
			fill(matrix, *rows, *columns, input);
			show(matrix, *rows, *columns);


			getMin(matrix, *rows, *columns, *rubish, *columnMin);
			getMax(matrix, *rows, *columns, *rubish, *columnMax);

			double* resultArray = arithmeticMeanColumns(matrix, *rows, *columnMin, *columnMax);
			cout << "Result array: ";
			arrayFuntions::doWithEachElement(resultArray, *rows, show);

			arrayFuntions::del(resultArray);
			del(matrix, *rows);
		}
		cout << endl << "Type + to continue or - to end the program ";
		cin >> *isToContinue;
	}
	delete rows;
	delete columns;
	delete columnMin;
	delete columnMax;
	delete rubish;
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
