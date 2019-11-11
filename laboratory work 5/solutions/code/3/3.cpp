#ifndef IOSTREAM
#include <iostream>
#endif

#ifndef DIVISIONAB_H
#include "divisionAB.h"
#endif

using namespace std;

#define MIN 10
#define MAX 99
#define NUMBER 13


int main()
{
	for (int i = MIN; i < MAX; i += 1) {
		if (checkSUMofSquaresOfNumerals(i, NUMBER)) {
			cout << i << endl;
		}
	}
}