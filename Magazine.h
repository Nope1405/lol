#pragma once
#include"Bookstore.h"
class Magazine :public Book {
protected:
	string model;
	int numpage;
public:
	Magazine(int _id, string _title, string _author, int _year, string model_, int numpage_) : Book(_id, _title, _author, _year), model(model_), numpage(numpage_) {};
	void setModel(string model);
	string getModel();
	void setNumpage(int numpage);
	int getNumpage();
	void toString()const override;
};