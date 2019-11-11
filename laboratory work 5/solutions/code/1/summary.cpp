#ifndef SUMMARY_H
#include "summary.h"
#endif


// Do n times operation function and sum them.
// Using max types because We can expect any value
static long double summaryWithOperationsWithoutRecursion(const long long int& n, long double (*operation)(const long long int& i)) {
	long double result = 0;
	for (long long int k = 1; k <= n; k += 1) {
		result += operation(k)/* do operation and add */;
	}
	return result;
}

// Do n times operation function and sum them.
// Using max types because We can expect any value
static long double summaryWithOperationsWithRecursion(const long long int& n, long double (*operation)(const long long int& i)) {
	long double result = 0;
	result += operation(n);
	if (n > 1) {
		result += summaryWithOperationsWithRecursion(n - 1,operation);
	}
	return result;
}

// Do n times operation function and sum them.
// Using max types because We can expect any value
// if recursion == true than factorial be calculated recursively
long double summaryWithOperations(const long long int& n, long double (*operation)(const long long int& i), bool recursion) {
	long double result;
	if (recursion == true) {
		result =summaryWithOperationsWithRecursion(n, operation);
	}
	else {
		result= summaryWithOperationsWithoutRecursion(n, operation);
	}
	return result;
}