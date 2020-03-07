#ifndef LIBRARY_H
#include "library.h"
#endif

#ifndef RULES_H
#include "rules.h"
#endif

bool isToShow(Book* someBook) {
	if (someBook->getNumberCopies() < 1000) {
		return true;
	}
	else {
		return false;
	}
}