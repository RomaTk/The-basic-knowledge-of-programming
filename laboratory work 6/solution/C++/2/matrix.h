#pragma once

namespace matrixFunctions{
	int** create(const int& rows, const int& columns, int);
	int** fill(int** matrix, const int& rows, const int& columns, int (*operation)(int, int));
	void show(int** matrix, const int& rows, const int& columns);
	void del(int** matrix, const int& rows);
}