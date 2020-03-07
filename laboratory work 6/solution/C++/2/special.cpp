#ifndef SPECIAL_H
#include "special.h"
#endif

#ifndef ARRAY_H
#include "array.h"
#endif




void getMin(int** matrix, const int& rows, const int& columns, int& resultRow, int& resultColumn) {
	int* min = new int(matrix[0][0]);
	resultRow = 0;
	resultColumn = 0;
	for (int column = 0; column < columns; column += 1) {
		for (int row = 0; row < rows; row += 1) {
			if (*min > matrix[row][column]) {
				*min = matrix[row][column];
				resultRow = row;
				resultColumn = column;
			}
		}
	}
	delete min;
	return;
}

void getMax(int** matrix, const int& rows, const int& columns, int& resultRow, int& resultColumn) {
	int* max = new int(matrix[0][0]);
	resultRow = 0;
	resultColumn = 0;
	for (int column = 0; column < columns; column += 1) {
		for (int row = 0; row < rows; row += 1) {
			if (*max < matrix[row][column]) {
				*max = matrix[row][column];
				resultRow = row;
				resultColumn = column;
			}
		}
	}
	delete max;
	return;
}

double* arithmeticMeanColumns(int** matrix, const int& rows, const int& column1, const int& column2) {
	double* returnArray = arrayFuntions::create(rows, double());
	for (int row = 0; row < rows; row += 1) {
		returnArray[row] = double(matrix[row][column1]) + double( matrix[row][column2])/2;
	}
	return returnArray;
}