
#ifndef ARRAY_H
#include "array.h"
#endif


namespace arrayFuntions {

	//return array with inputed type and range
	int* create(const int& n, int) {
		int* newArray = new int[n];
		return newArray;
	}
	double* create(const int& n, double) {
		double* newArray = new double[n];
		return newArray;
	}


	//return array with inputed type and range changed each element by function
	int* fill(int arr[], const int& n, int (*operation)(int)) {
		for (int i = 0; i < n; i += 1) {
			arr[i] = operation(i);
		}

		return arr;
	}

	//return array with inputed type and range and make function with each element
	//function takes that origin element 
	int* doWithEachElement(int arr[], const int& n, void (*operation)(int&)) {
		for (int i = 0; i < n; i += 1) {
			operation(arr[i]);
		}
		return arr;
	}
	double* doWithEachElement(double arr[], const int& n, void (*operation)(double&)) {
		for (int i = 0; i < n; i += 1) {
			operation(arr[i]);
		}
		return arr;
	}

	//return array with inputed type and range removed every element by function if it return true
	//function takes that origin element 
	int* clear(int arr[], int& n, bool (*operation)(const int&)) {
		int* k = new int(0);
		for (int i = 0; i < n; i += 1) {
			if (operation(arr[i]) == false) {
				*k += 1;
			}
		}

		int* newArr = new int[*k];
		int* z = new  int(0);
		for (int i = 0; i < n; i += 1) {
			if (operation(arr[i]) == false) {
				newArr[*z] = arr[i];
				*z += 1;
				if (*z >= *k) {
					break;
				}
			}
		}
		arr = &*newArr;
		n = *k;
		delete k;
		delete z;
		return arr;
	}
	double* clear(double arr[], int& n, bool (*operation)(const double&)) {
		int* k = new int(0);
		for (int i = 0; i < n; i += 1) {
			if (operation(arr[i]) == false) {
				*k += 1;
			}
		}

		double* newArr = new double[*k];
		int* z = new  int(0);
		for (int i = 0; i < n; i += 1) {
			if (operation(arr[i]) == false) {
				newArr[*z] = arr[i];
				*z += 1;
				if (*z >= *k) {
					break;
				}
			}
		}
		arr = &*newArr;
		n = *k;
		delete k;
		delete z;
		return arr;
	}

	// delete[] arr
	void del(int arr[]) {
		delete[] arr;
		return;
	}
	void del(double arr[]) {
		delete[] arr;
		return;
	}

}