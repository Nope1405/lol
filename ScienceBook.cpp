#include"ScienceBook.h"

void Science::setanimal(string animal) {
	this->animal = animal;
}
string Science::getanimal() {
	return animal;
}
void Science::setnumberofanimal(int numberofanimal) {
	this->numberofanimal = numberofanimal;
}
int Science::getnumberofanimal() {
	return numberofanimal;
}
void Science::toString()const {
	std::cout << "Title: " << '\n';
	std::cout << "Author: " << '\n';
	std::cout << "Year of Publish: " << '\n';
	std::cout << "ID of the Book: " << '\n';
	std::cout << "Publisher: " << '\n';
	std::cout << "Number of Reprint: " << '\n';
}
