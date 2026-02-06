#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
	int  pType;
	int pID;
	string descript;
	string maker;
	int price;
public:
	Product(int pType, int pID, string descript, string maker, int price);
	virtual void printProduct() = 0;
	virtual ~Product() {}

	int getPType() { return pType; }
	int getPID() { return pID; }
	string getDescript() { return descript; }
	string getMaker() { return maker; }
	int getPrice() { return price; }
};
#endif
