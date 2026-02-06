#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;
#include "Product.h"
class Book : public Product
{
	int ISBN;
	string title;
	string author;
public:
	Book(int pType, int pID, string descript, string maker, int price, int ISBN, string title, string author);
	void printProduct();
	void printBook();
	int getISBN() { return ISBN; }
	string getTitle() { return title; }
	string getAuthor() { return author; }
	
};

#endif