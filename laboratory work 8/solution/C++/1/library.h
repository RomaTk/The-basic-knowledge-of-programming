#pragma once


#ifndef BOOK_H
#include "book.h"
#endif


class Library {
	private:
		const int maxLenOfBooks = 1000;
		Book **books=new Book*[maxLenOfBooks];
		int nowInLibrary = 0;
		string location = "../library";
	public:
		//main
		void init(string locationOfDirectry);
		void init();

		void add(Book * book);

		void show();
		void free();
		void save();
		void deleteFiles();
		void extract();
		void interface();

		Library* pickOut(bool (*opeartion)(Book*));
		int getNowInLibrary();
		string getLocation();
		void setLocation(string location);


		//specific
		void write(ofstream& file);
		void rewriteFile(string fileName);
		void addToFile(string fileName);
		void read(ifstream& file);
		void readFromFile(string fileName);
		void removeFile(string fileName);
};