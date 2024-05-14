#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<iomanip>
using namespace std;
class Book{
protected:
	int id;
	string title;
	string name;
	int year;
public:
	Book();
	Book(int, string, string, int) ;
	void setId(int id);
	int getId()const;
	void setTitle(std::string title);
	string getTitle()const;
	void setName(string name);
	string getName()const;
	void setYear(int year);
	int getYear()const;
	virtual void toString()const;

};