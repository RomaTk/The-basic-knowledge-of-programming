#ifndef SPECIAL_H
#include "special.h"
#endif

#ifndef TEXT_H
#include "text.h"
#endif 

#ifndef IOSTREAM
#include <iostream>
using namespace std;
#endif 



//is it numeral
bool isNumber(char& symbol) {
	switch (symbol)
	{
	case '0':
		return true;
	case '1':
		return true;
	case '2':
		return true;
	case '3':
		return true;
	case '4':
		return true;
	case '5':
		return true;
	case '6':
		return true;
	case '7':
		return true;
	case '8':
		return true;
	case '9':
		return true;
	default:
		return false;
	}
}

//is it a separation between words
bool isFree(char& symbol) {
	switch (symbol)
	{
	case ' ':
		return true;
	case '\n':
		return true;
	default:
		return false;
	}
}

//show words which don't have numerals
void showWordsWithoutNumbers(char** text, int& len) {
	int* indexOfString = new int;
	int* indexOfSymbol = new int;
	int* startIndex = new int(-1);
	bool* wasNotNumber = new bool(true);
	for (int i = 0; i < len; i += 1) {
		*indexOfString = i / text::maxSize;
		*indexOfSymbol = i % text::maxSize;
		if (isFree(text[*indexOfString][*indexOfSymbol])||(i==len-1)) {
			if ((i == len - 1 ) && (!isFree(text[*indexOfString][*indexOfSymbol]))){
				i += 1;
			}
			if ((*wasNotNumber)&&(i-*startIndex>1)) {
				for (int j = *startIndex + 1; j < i; j += 1) {
					*indexOfString = j / text::maxSize;
					*indexOfSymbol = j % text::maxSize;
					cout << text[*indexOfString][*indexOfSymbol];
				}
				cout<< '\n';
			}
			*startIndex = i;
			*wasNotNumber = true;
		}
		else if (isNumber(text[*indexOfString][*indexOfSymbol])) {
			*wasNotNumber = false;
		}
	}
	delete wasNotNumber;
	delete startIndex;
	delete indexOfSymbol;
	delete indexOfString;
}