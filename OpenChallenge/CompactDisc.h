#ifndef COMPACTDISC_H
#define COMPACTDISC_H
#include <string>
using namespace std;
#include "Product.h"

class CompactDisc : public Product {
	string albumTitle;
	string artist;
public:
	CompactDisc(int pType, int pID, string descript, string maker, int price, string albumTitle, string artist);
	void printProduct();
	void printCompactDisc();
	string getAlbumTitle() { return albumTitle; }
	string getArtist() { return artist; }
	
};



#endif