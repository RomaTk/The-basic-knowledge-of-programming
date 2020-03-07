#ifndef FSTREAM
#include <fstream>
#endif 

#ifndef IOSTREAM
#include <iostream>
#endif 

#ifndef BOOK_H
#include "book.h"
#endif

#ifndef STRING
#include <string>
#endif

using namespace std;


void Book::init(string name, string author, int year, int numberCopies, int numberPages) {
	this->name = name;
	this->author = author;
	this->year = year;
	this->numberCopies = numberCopies;
	this->numberPages = numberPages;
}
void Book::defineByText() {
	cout << "Enter name of a book: "; cin >> this->name;
	cout << "Enter author name: "; cin >> this->author;
	cout << "Enter year of the book: "; cin >> this->year;
	cout << "Enter the number of copies of the book: "; cin >> this->numberCopies;
	cout << "Enter the number of pages of the book: "; cin >> this->numberPages;
}
void Book::show() {
	cout
		<< "Name: " << name << endl
		<< "Author: " << author << endl
		<< "Year of publication: " << year << endl
		<< "Number of copies: " << numberCopies << endl
		<< "Number of pages: " << numberPages << endl;
}


void Book::write(ofstream &file) {
	file
		<< this->name << '\0'
		<< this->author << '\0'
		<< this->year << '\0'
		<< this->numberCopies << '\0'
		<< this->numberPages << '\0';
}
void Book::rewriteFile(string fileName) {
	ofstream file;
	file.open(fileName);
	this->write(file);
	file.close();
}
void Book::addToFile(string fileName) {
	ofstream file;
	file.open(fileName, ios::app);
	this->write(file);
	file.close();
}

void Book::read(ifstream &file) {
	char *forNullSymbol=new char('0');
	getline(file, name, '\0');
	getline(file, author, '\0');
	file >> year >> *forNullSymbol >> numberCopies >> *forNullSymbol >> numberPages >> *forNullSymbol;
	delete forNullSymbol;
}
void Book::readFromFile(string fileName) {
	ifstream file;
	file.open(fileName);
	this->read(file);
	file.close();
}

void Book::removeFile(string fileName) {
	remove(fileName.data());
}
void Book::purify() {
	name = string();
	author = string();
	year=int();
	numberCopies=int();
	numberPages = int();
}

string Book::getName() { return name; }
string Book::getAuthor() { return author; }
int Book::getYear() { return year; }
int Book::getNumberCopies() { return numberCopies; }
int Book::getNumberPages() { return numberPages; }

void Book::setName(string input) { name = input; }
void Book::setAuthor(string input) { author = input; }
void Book::setYear(int input) { year = input; }
void Book::setNumberCopies(int input) { numberCopies = input; }
void Book::setNumberPages(int input) { numberPages = input; }