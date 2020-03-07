#ifndef SPECIAL1_H
#include "special1.h"
#endif

#ifndef TEXT_H
#include "text.h"
#endif

#ifndef IOSTREAM
#include <iostream>
using namespace std;
#endif 

#include <algorithm> 

//function for sort()
bool compareFunction(string s1, string s2) {
	return (s1.length() < s2.length());
}

//sort words by length of words 
void sortAndShowWordsInLine(string* text, int& start, int& end) {
	string* words= text::create(string());
	int* wordsNumber = new int(0);
	string *oneWord = new string("");
	int* indexOfString = new int;
	int* indexOfSymbol = new int;
	for (int i = start; i <= end; i += 1) {
		*indexOfString = i / text::maxSize;
		*indexOfSymbol = i % text::maxSize;
		if ((text[*indexOfString][*indexOfSymbol] == ' ')||(i==end)) {
			if (oneWord->length() != 0) {
				words[*wordsNumber]=*oneWord;
				*wordsNumber += 1;
			}
			*oneWord = "";
		}else {
			*oneWord += text[*indexOfString][*indexOfSymbol];
		}
	}
	sort(words, words + *wordsNumber ,compareFunction);
	for (int i = 0; i < *wordsNumber;i+=1) {
		cout << words[i] << " ";
	}
	delete indexOfSymbol;
	delete indexOfString;
	delete oneWord;
	delete wordsNumber;
	text::del(words);
}


//find lines to do sortAndShowWordsInLine()
void sortWordsInText(string* text, int& len) {
	int* indexOfString = new int;
	int* indexOfSymbol = new int;
	int* startIndex = new int(0);
	bool* wasNotNumber = new bool(true);
	for (int i = 0; i <= len; i += 1) {
		*indexOfString = i / text::maxSize;
		*indexOfSymbol = i % text::maxSize;
		if ((text[*indexOfString][*indexOfSymbol] == '\n')||(i==len)) {
			sortAndShowWordsInLine(text,*startIndex,i);
			cout << endl;
			*startIndex = i + 1;
		}
	}
	delete wasNotNumber;
	delete startIndex;
	delete indexOfSymbol;
	delete indexOfString;
}