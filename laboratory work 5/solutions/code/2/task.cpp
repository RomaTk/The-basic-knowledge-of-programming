#ifndef VISUALISAATION
#include "visualisation.h"
#endif

#ifndef TASK_H
#include "task.h"
#endif

#define TONUMBER 0

//the main sense of program starts here
void run() {
	bool* firstCircle = new bool(true);
	long long int* number = new long long int(1);
	long long int* result = new long long int(1);
	do {
		inputInteger(*number);
		if (*number != TONUMBER) {//continue
			*result *= *number;
			*firstCircle = false;
		}
		else {//exit
			if (*firstCircle == true) {
				*result = 0;
			}
		}
	} while (*number != 0);
	outputIntegerResult(*result);
	delete result;
	delete number;
	delete firstCircle;
}