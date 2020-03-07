#include <iostream>
using namespace std;

#ifndef MATRIX_H
#include "matrix.h"
#endif // !MATRIX_H


namespace matrixFunctions {
	int** create(const int& rows, const int& columns, int) {
		int** matrix = new int* [rows];
		for (int i = 0; i < rows; i += 1) {
			matrix[i] = new int[columns];
		}
		return matrix;
	}

	int** fill(int** matrix, const int& rows, const int& columns, int (*operation)(int, int)) {
		for (int column = 0; column < columns; column += 1) {
			for (int row = 0; row < rows; row += 1) {
				matrix[row][column] = operation(row, column);
			}
		}
		return matrix;
	}

	void show(int** matrix, const int& rows, const int& columns) {
		for (int row = 0; row < rows; row += 1) {
			for (int column = 0; column < columns; column += 1) {
				cout << matrix[row][column] << "\t";
			}
			cout << endl;
		}
		return;
	}

	void del(int** matrix, const int& rows) {
		for (int row = rows - 1; row >= 0; row -= 1) {
			delete[] matrix[row];
		}
		delete[] matrix;
	}

}