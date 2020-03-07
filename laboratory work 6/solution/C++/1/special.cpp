#ifndef SPECIAL_H
#include "special.h"
#endif

#ifndef ARRAY_H
#include "array.h"
#endif

void clear(int arr[], int& n, bool (*operation)(const int&), int** newArr, int **newN) {

	int* k = new int(0);
	for (int i = 0; i < n; i += 1) {
		if (operation(arr[i]) == false) {
			*k += 1;
		}
	}

	*newN = new int(*k);
	*newArr = arrayFuntions::create(*k, int());
	int* z = new  int(0);
	for (int i = 0; i < n; i += 1) {
		if (operation(arr[i]) == false) {
			(*newArr)[*z] = arr[i];
			*z += 1;
			if (*z == *k) {
				break;
			}
		}
	}
	
	delete k;
	delete z;
	return;
}