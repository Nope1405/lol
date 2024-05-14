#include"Magazine.h"
using namespace std;


void Magazine::setModel(string model) {
	this->model = model;
}
string Magazine::getModel() {
	return model;
}
void Magazine::setNumpage(int numpage) {
	this->numpage = numpage;
}
int Magazine::getNumpage() {
	return numpage;
}
void Magazine::toString()const {
	std::cout << "Title: " << '\n';
	std::cout << "Author: " << '\n';
	std::cout << "Year of Publish: " << '\n';
	std::cout << "ID of the Book: " << '\n';
	std::cout << "Publisher: " << '\n';
	std::cout << "Number of Reprint: " << '\n';
}

