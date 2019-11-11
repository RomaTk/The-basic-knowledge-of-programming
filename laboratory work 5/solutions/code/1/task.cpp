#ifndef TASK_H
#include "task.h"
#endif

#ifndef factorial_H
#include "factorial.h"
#endif

// ((2i+1)*(i-3))/(2i-1)!
long double fraction(const long long int& i) {
	return long double((2 * i + 1) * (i - 3)) / factorial(2 * i - 1)/* (2i - 1)! */;
}

// ((2i+1)*(i-3))/(2i-1)!
long double fractionWithRecursion(const long long int& i) {
	return long double((2 * i + 1) * (i - 3)) / factorial(2 * i - 1, true)/* (2i - 1)! */;
}