#ifndef LIBRARY_H
#include "library.h"
#endif

#ifndef STRING
#include <string>
#endif

#ifndef FSTREAM
#include <fstream>
#endif 

#ifndef RULES_H
#include "rules.h"
#endif


#ifndef Direct_H
#include <direct.h>
#endif
#include <direct.h>

using namespace std;

void Library::init(string locationOfDirectry) {
	int* resultOfCreation = new int;
	*resultOfCreation = _mkdir(locationOfDirectry.data());
	location = locationOfDirectry;
	delete resultOfCreation;
}
void Library::init() {
	int* resultOfCreation = new int;
	*resultOfCreation = _mkdir(location.data());
	delete resultOfCreation;
}
void Library::add(Book *book) {
	books[nowInLibrary] = book;
	nowInLibrary += 1;
}
void Library::show() {
	for (int i = 0; i < nowInLibrary; i += 1) {
		books[i]->show();
	}
}
void Library::save() {
	this->init();
	rewriteFile(location+"//library.txt");
	for (int i = 0; i < nowInLibrary; i += 1) {
		books[i]->rewriteFile(location +"//"+to_string(i)+".txt");
	}
}
void Library::extract() {
	this->init();
	readFromFile(location + "//library.txt");
	for (int i = 0; i < nowInLibrary; i += 1) {
		Book *newBook=new Book;
		newBook -> readFromFile(location + "//" + to_string(i) + ".txt");
		books[i]=newBook;
	}
}

void Library::deleteFiles() {
	removeFile(location + "//library.txt");
	for (int i = 0; i < nowInLibrary; i += 1) {
		removeFile(location + "//" + to_string(i) + ".txt");
	}
}

Library* Library::pickOut(bool (*opeartion)(Book*)) {
	Library *newLibrary=new Library;
	(*newLibrary).init(location + "//library");
	for (int i = 0; i < nowInLibrary; i += 1) {
		if (opeartion(books[i])) {
			(*newLibrary).add(books[i]);
		}
	}
	return newLibrary;
}
int Library::getNowInLibrary() {
	return nowInLibrary;
}
string Library::getLocation() {
	return location;
}
void Library::setLocation(string location) {
	deleteFiles();
	this->location = location;
}


void Library::interface() {
	int number = 0;
	bool cont = true;
	while (cont)
	{
		cout<<endl << "The inteface for library: " << endl
			<< endl
			<< "To see where now library located enter 1 " << endl
			<< "To change library location enter 2 " << endl
			<< "To get how many books now in the library enter 3 " << endl
			<< "To delete files of the library enter 4 " << endl
			<< "To extract the library from this location enter 5 " << endl
			<< "To save the library in this location enter 6" << endl
			<< "To show the library in enter 7" << endl
			<< "To add a book to the library enter 8" << endl
			<< "To end enter 9" << endl
			<< "To do the task enter 10" << endl;

		cin >> number;
		if (number == 1) {
			cout << getLocation();
		}
		else if (number == 2) {
			string location;
			cout << "Enter new location ";
			cin >> location;
			setLocation(location);
		}
		else if (number == 3) {
			cout << getNowInLibrary();
		}
		else if (number == 4) {
			deleteFiles();
		}
		else if (number == 5) {
			extract();
		}
		else if (number == 6) {
			save();
		}
		else if (number == 7) {
			show();
		}
		else if (number == 8) {
			Book* someBook = new Book;
			someBook->defineByText();
			this->add(someBook);
		}
		else if (number == 9) {
			cont = false;
		}
		else if (number == 10) {
			Library* someNewBook = this->pickOut(isToShow);
			someNewBook->show();
			cout << "----------------------"<<endl;
			cout << "Number: " << someNewBook->getNowInLibrary()<<endl;
			delete someNewBook;
		}
	}
}

void Library::free(){
	deleteFiles();
	delete[] books;
}



//specific
void Library::write(ofstream& file) {
	file
		<< this->location << '\0'
		<< this->nowInLibrary << '\0';
}
void Library::rewriteFile(string fileName) {
	ofstream file;
	file.open(fileName);
	this->write(file);
	file.close();
}
void Library::addToFile(string fileName) {
	ofstream file;
	file.open(fileName, ios::app);
	this->write(file);
	file.close();
}
void Library::read(ifstream& file) {
	char* forNullSymbol = new char('0');
	getline(file, location, '\0');
	file >> nowInLibrary >> *forNullSymbol;
	delete forNullSymbol;
}
void Library::readFromFile(string fileName) {
	ifstream file;
	file.open(fileName);
	this->read(file);
	file.close();
}
void Library::removeFile(string fileName) {
	remove(fileName.data());
}