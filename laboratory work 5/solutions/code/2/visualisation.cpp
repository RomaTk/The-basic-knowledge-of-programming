#ifndef IOSTREAM
#include <iostream>
#endif

#ifndef VISUALISAATION
#include "visualisation.h"
#endif 

using namespace std;

// to input any long long integer
void inputInteger(long long int &number) {
	cout << "Input integer: ";
	cin >> number;
}

// to output any long long integer as result
void outputIntegerResult(long long int& number) {
	cout << "result: "<<number;
}
