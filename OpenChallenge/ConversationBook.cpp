#include <iostream>
#include <string>
using namespace std;

#include "ConversationBook.h"

ConversationBook::ConversationBook(int pType, int pID, string descript, string maker, int price, int ISBN, string title, string author, string language) : Book(pType, pID, descript, maker, price, ISBN, title, author) {
	this->language = language;
}
void ConversationBook::printProduct()
{
	Book::printProduct();
	cout << "¾ð¾î : " << language << endl;
}
void ConversationBook::printConversationBook()
{
	printProduct();
}
