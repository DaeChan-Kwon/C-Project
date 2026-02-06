#include <iostream>
#include <string>
using namespace std;
#include "Book.h"

Book::Book(int pType, int pID, string descript, string maker, int price, int ISBN, string title, string author) :Product(pType,pID,descript,maker,price)
{
	this->ISBN = ISBN;
	this->title = title;
	this->author = author;
}
void Book::printProduct()
{
	Product::printProduct();
	cout << "ISBN : " << ISBN << endl;
	cout << "책 제목 : " << title << endl;
	cout << "저자 : " << author << endl;
}
void Book::printBook() {
	printProduct();
}