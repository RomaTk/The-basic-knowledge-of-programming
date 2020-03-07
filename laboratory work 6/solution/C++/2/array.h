#pragma once

namespace arrayFuntions {
	//return array with inputed type and range
	int* create(const int& n, int);
	double* create(const int& n, double);

	//return array with inputed type and range changed each element by function
	int* fill(int arr[], const int& n, int (*operation)(int));

	//return array with inputed type and range and make function with each element
	//function takes that origin element 
	int* doWithEachElement(int arr[], const int& n, void (*operation)(int&));
	double* doWithEachElement(double arr[], const int& n, void (*operation)(double&));

	//return array with inputed type and range removed every element by function if it return true
	//function takes that origin element 
	int* clear(int arr[], int& n, bool (*operation)(const int&));
	double* clear(double arr[], int& n, bool (*operation)(const double&));

	// delete[] arr
	void del(int arr[]);
	void del(double arr[]);
}