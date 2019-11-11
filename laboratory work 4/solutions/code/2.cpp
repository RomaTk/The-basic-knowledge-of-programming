#include <iostream>
#include <math.h>

using namespace std;

#define STEP 0.2
#define START -2
#define END 5



int main()
{
	string* con = new string("+");
	while (*con != "-")
	{
		if (*con == "+") {
			//first part
			cout << "-------------------------------------------";
			cout << endl << "|";
			cout.width(21);
			cout << "y|";
			cout.width(21);
			cout << "x|" << endl;
			cout << "-------------------------------------------" << endl;
			for (double i = START; i <= END; i += STEP) {
				cout << '|';
				cout.width(20);
				cout << tan(i / 3) * sin(i - 1.2) << "|";
				cout.width(20);
				cout << i << "|" << endl << "-------------------------------------------" << endl;
			}



			//second part
			cout << "-------------------------------------------";
			cout << endl << "|";
			cout.width(21);
			cout << "y|";
			cout.width(21);
			cout << "x|" << endl;
			cout << "-------------------------------------------" << endl;
			for (double i = START; i <= END; i += STEP) {
				cout << '|';
				cout.width(20);
				cout << sin(i) / log(i + 4) << "|";
				cout.width(20);
				cout << i << "|" << endl << "-------------------------------------------" << endl;
			}
		}
		cout << "type '+' to repeat or '-' to terminate "; cin >> *con;
	}
	delete con;

	return 0;
}