#include"Bookstore.h"
using namespace std;
Book::Book() {
	id = 0;
	title = "";
	name = "";
	year = 0;
}
Book::Book(int id_, string name_, string title_, int year_) {
	id = id_;
	name = name_;
	title = title_;
	year = year_;
}
void Book::setId(int id) {
	this->id = id;
}
int Book::getId()const {
	return id;
}
void Book::setName(string name) {
	this->name = name;
}
string Book::getName()const {
	return name;
}
void Book::setTitle(string title) {
	this->title =title;
}
string Book::getTitle()const {
	return title;
}
void Book::setYear(int year) {
	this->year = year;
}
int Book::getYear()const {
	return year;
}
void Book::toString()const  {

}
