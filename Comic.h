#pragma once
#include"Bookstore.h"
class Comic :public Book {
private:
	string character;
	int numberofChar;
public:	
	Comic(int _id, string _title, string _author, int _year, string _character, int _numberofChar) : Book(_id, _title, _author, _year), character(_character), numberofChar(_numberofChar) {};
	void setChar(string character);
	string getChar();
	void setNumofchar(int numberofChar);
	int getNumberofchar();
	void toString()const override;

};