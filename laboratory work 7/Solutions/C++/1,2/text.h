#pragma once

#ifndef IOSTREAM
#include <iostream>
using namespace std;
#endif 

namespace text {

	//max range of array for text
	const int maxSize = 16000;
	
	//initialize text
	char** create(char);
	string* create(string);
	
	// fill text by symbols
	void enterText(char** text, int& len);
	void enterText(string* text, int& len);

	// delete arrays "TEXT"
	void del(char** text);
	void del(string* text);
}