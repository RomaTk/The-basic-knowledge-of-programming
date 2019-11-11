#ifndef IOSTREAM
#include <iostream>
#endif

#ifndef factorial_H
#include "factorial.h"
#endif

#ifndef SUMMARY_H
#include "summary.h"
#endif

#ifndef MATHOPERATIONS_H
#include "mathOperations.h"
#endif

#ifndef TASK_H
#include "task.h"
#endif


using namespace std;



int main()
{
	string* isToContinue = new string("+");
	int* n = new int(0);
	while (*isToContinue != "-") {
		if (*isToContinue == "+") {
			cout << "input n: ";
			cin >> *n;
			cout << "result: " << summaryWithOperations(*n, fraction)<<endl;
			cout << "result with recursion: " << summaryWithOperations(*n, fractionWithRecursion,true);
		}
		cout <<endl<< "Type + to continue or - to end the program ";
		cin >> *isToContinue;
	}
	delete n;
	delete isToContinue;
	return 0;
}