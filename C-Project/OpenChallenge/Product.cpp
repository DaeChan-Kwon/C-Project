#include <iostream>
#include <string>
using namespace std;

#include "Product.h"

Product::Product(int pType, int pID, string descript, string maker, int price)
{
	this->pType = pType;
	this->pID = pID;
	this->descript = descript;
	this->maker = maker;
	this->price = price;
}
void Product::printProduct()
{
	cout << "---상품 ID : " << pID << endl;
	cout << "상품 설명 : " << descript << endl;
	cout << "생산자 : " << maker << endl;
	cout << "가격 : " << price << endl;
}