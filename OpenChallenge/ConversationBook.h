#ifndef CONVERSATIONBOOK_H
#define CONVERSATIONBOOK_H

#include <string>
using namespace std;

#include "Book.h"
class ConversationBook :public Book {
	string language;
public:
	ConversationBook(int pType, int pID, string descript, string maker, int price, int ISBN, string title, string author, string language);
	void printProduct();
	void printConversationBook();
	string getLanguage() { return language; }
	
};
#endif