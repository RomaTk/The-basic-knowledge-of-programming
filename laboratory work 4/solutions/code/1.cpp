#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	string* con = new string("+");
	while (*con != "-")
	{
		if (*con == "+") {
			double* x = new double(0), * sum = new double(0);
			int* n = new int(0);
			cout << "input x: ";
			cin >> *x;
			cout << "input n: ";
			cin >> *n;
			for (int i = 1; i <= *n; i += 1) {
				double* ch = new double(pow(*x, i));
				*sum += *ch;
				cout << *x << "^" << i << "= " << *ch << endl;
				delete ch;
			}
			cout << "sum= " << *sum << endl;
			delete n;
			delete x;
			delete sum;
		}
		cout << "type '+' to repeat or '-' to exit: "; cin >> *con;
	}
	delete con;
	return 0;
}