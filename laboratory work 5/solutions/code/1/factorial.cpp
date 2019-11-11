#ifndef factorial_H
#include "factorial.h"
#endif



// value! without recursion
// Using int type because the min "long int x!">"long long int x"
static long long int factorialWithoutRecursion(const int& value) { // value= int value
	long long int result = value;
	for (int k = result - 1; k > 1; k -= 1) {
		result *= k;
	}
	return result;
}

// value! with recursion
// Using int type because the min "long int x!">"long long int x"
static long long int factorialWithRecursion(const int& value) { // value= int value
	long long int result = value;
	if (value > 1) {
		result*=factorialWithRecursion(value - 1);
	}
	return result;
}

// value!
// Using int type because the min "long int x!">"long long int x"
// if recursion == true than factorial be calculated recursively
long long int factorial(const int& value, bool recursion) { // value= int value
	long long int result = 0;
	if (recursion) {
		result = factorialWithRecursion(value);
	}
	else {
		result = factorialWithoutRecursion(value);
	}
	return result;
}