#pragma once

#ifndef IOSTREAM
#include <iostream>
using namespace std;
#endif 

class Book {
private:
	string name, author;
	int year=0, numberCopies=0, numberPages=0;
	
public:
	void init(string name, string author, int year, int numberCopies, int numberPages);
	void defineByText();
	void show();
	void write(ofstream& file);
	void rewriteFile(string fileName);
	void addToFile(string fileName);
	void read(ifstream& file);
	void readFromFile(string fileName);
	void removeFile(string fileName);
	void purify();

	string getName();
	string getAuthor();
	int getYear();
	int getNumberCopies();
	int getNumberPages();

	void setName(string input);
	void setAuthor(string input);
	void setYear(int input);
	void setNumberCopies(int input);
	void setNumberPages(int input);
};