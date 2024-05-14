#include"Comic.h"
using namespace std;

void Comic::setChar(string character) {
		this->character = character;
	}
string Comic::getChar() {
		return character;
	}
void Comic::setNumofchar(int numberofChar) {
		this->numberofChar = numberofChar;
	}
int Comic::getNumberofchar() {
		return numberofChar;
}
void Comic::toString()const {
	std::cout << "Title: " << '\n';
	std::cout << "Author: " << '\n';
	std::cout << "Year of Publish: "  << '\n';
	std::cout << "ID of the Book: " << '\n';
	std::cout << "Publisher: " << '\n';
	std::cout << "Number of Reprint: "  << '\n';
}