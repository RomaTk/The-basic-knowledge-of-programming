
#ifndef TEXT_H
#include "text.h"
#endif // !TEXT_H

#ifndef IOSTREAM
#include <iostream>
using namespace std;
#endif 

namespace text {

	//initialize text
	char** create(char) {
		char** text = new char* [maxSize];
		for (int i = 0; i < maxSize; i += 1) {
			text[i] = new char[maxSize];
		}
		return text;
	}
	string* create(string) {
		string* text = new string[maxSize];
		for (int i = 0; i < maxSize; i += 1) {
			text[i] = string("");
		}
		return text;
	}

	// fill text by symbols
	void enterText(char** text, int& len) {
		char* symbol = new char;
		int* indexOfString = new int;
		int* indexOfSymbol = new int;
		while (cin.get(*symbol)) {
			if (*symbol == 26) {
				break;
			}
			*indexOfString = len / maxSize;
			*indexOfSymbol = len % maxSize;
			text[*indexOfString][*indexOfSymbol] = *symbol;
			len += 1;
		}
		delete indexOfSymbol;
		delete indexOfString;
		delete symbol;
	}
	void enterText(string* text, int& len) {
		char* symbol = new char;
		int* indexOfString = new int;
		while (cin.get(*symbol)) {
			if (*symbol == 26) {
				break;
			}
			*indexOfString = len / maxSize;
			text[*indexOfString] += *symbol;
			len += 1;
		}
		delete indexOfString;
		delete symbol;
	}

	// delete arrays "TEXT"
	void del(char** text) {
		for (int i = 0; i < maxSize; i += 1) {
			delete[] text[i];
		}
		delete[] text;
	}
	void del(string* text) {
		delete[] text;
	}
}
