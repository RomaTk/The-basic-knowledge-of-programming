#ifndef IOSTREAM
#include <iostream>
#endif

#ifndef TASK_H
#include "task.h"
#endif

using namespace std;



int main()
{
	string* isToContinue = new string("+");
	while (*isToContinue != "-") {
		if (*isToContinue == "+") {
			run();
		}
		cout <<endl<<"Type + to continue or - to end the program ";
		cin >> *isToContinue;
	}
	delete isToContinue;
}
