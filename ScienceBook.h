
#pragma once
#include"Bookstore.h"
class Science :public Book {
protected:
	string animal;
	int numberofanimal;
public:
	Science(int _id, string _title, string _author, int _year, string animal_, int numberofanimal_) : Book(_id, _title, _author, _year), animal(animal_), numberofanimal(numberofanimal_) {};
	void setanimal(string animal);
	string getanimal();
	void setnumberofanimal(int animalnum);
	int getnumberofanimal();
	void toString()const override;
};