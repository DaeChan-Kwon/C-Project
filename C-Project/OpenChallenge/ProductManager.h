#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include "Product.h"

class ProductManager {
	Product* p[100];
	int numOfProduct;
	int productID;
public:
	ProductManager();
	~ProductManager();
	void run();
	void addProduct(int pType);

};

#endif