
#ifndef DIVISIONAB_H
#include "divisionAB.h"
#endif

/*checking is (a^2+b^2)%c, where
	ab-number; a and b - numerals
	c-byNumber;
*/
bool checkSUMofSquaresOfNumerals(const int& number, const int& byNumber) {
	bool result = false;
	int *a1 = new int(number / 10);
	int *a2 = new int(number % 10);
	if ((*a1 * *a1 + *a2 * *a2) % byNumber == 0) {
		result = true;
	}
	delete a1;
	delete a2;
	return result;
}