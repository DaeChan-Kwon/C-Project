#include <iostream>
#include <string>
using namespace std;

#include "CompactDisc.h"

CompactDisc::CompactDisc(int pType, int pID, string descript, string maker, int price, string albumTitle, string artist) : Product(pType, pID, descript, maker, price) {
	this->albumTitle = albumTitle;
	this->artist = artist;
}
void CompactDisc::printProduct()
{
	Product::printProduct();
	cout << "앨범제목 : " << albumTitle << endl;
	cout << "가수 : " << artist << endl;
}
void CompactDisc::printCompactDisc()
{
	printProduct();
}