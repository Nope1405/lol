#include"Bookstore.h"
#include"Comic.h"
#include"Magazine.h"
#include"ScienceBook.h"
#include <vector>

using namespace std;

void addbook(vector<Book*>& book) {
	cout << "1.Comic" << endl;
	cout << "2.Magazine" << endl;
	cout << "3.Science" << endl;
	int choice;
	cin >> choice;
	int id;
	string title, author;
	int year;
	cout << "Enter ID: ";
	cin >> id;
	cout << "Enter Title: ";
	cin.ignore();
	getline(cin, title);
	cout << "Enter Author: ";
	getline(cin, author);
	cout << "Enter Year: ";
	cin >> year;
	switch (choice) {
		if (choice == 1) {
			cout << "Character" << endl;
			string character;
			int numofchar;
			cin >> character;
			cout << "Num of char" << endl;
			cin >> numofchar;
			book.push_back(new Comic(id, title, author, year, character, numofchar));
		}
		if (choice == 2) {
			cout << "Model" << endl;
			string model;
			int numpage;
			cin >> model;
			cout << "Numpage" << endl;
			cin >> numpage;
			book.push_back(new Magazine(id, title, author, year, model, numpage));
		}
		if (choice == 3) {
			cout << "Animal" << endl;
			string animal;
			int numofanimal;
			cin >> animal;
			cout << "Numofanimal" << endl;
			cin >> numofanimal;
			book.push_back(new Science(id, title, author, year, animal, numofanimal));
		}
		default:
			cout << "invalid" << endl;
			break;
		}
}
void remove(vector<Book*>& book) {
	int removeID;
	cout << "Enter id" << endl;
	cin >> removeID;
	for (int i = 0; i < book.size(); i++) {
		if (book[i]->getId() == removeID) {
			delete book[i];
			book.erase(book.begin() + i);
			cout << "REmove!" << endl;
		}

	}

}
void exit(vector<Book*>& book) {
	for (int i = 0; i < book.size(); i++) {
		if (book.empty() == false) {
			delete book[i];
		}
	}
	book.clear();
}
void printbook(vector<Book*>&book) {
	cout << "book in store" << endl;
	for (const auto& lib : book) {
		lib->toString();
	}
	cout << endl;
}


void search(vector<Book*>&book) {
	string searchtitle;
	cout << "Enter your title" << endl;
	cin >> searchtitle;
	for (int i = 0; i < book.size();i++) {
		if (book[i]->getTitle() == searchtitle) {
			book[i]->toString();
		}
		break;
	}
};
int main() {
	vector<Book*> bookshelf;
	while (true) {
		std::cout << "1. Add a new book" << std::endl;
		std::cout << "2. Display books in your Library" << std::endl;
		std::cout << "3. Search for a book" << std::endl;
		std::cout << "4. Remove a book" << std::endl;
		std::cout << "5. Exit" << std::endl;

		int choice;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			addbook(bookshelf);
			break;
		case 2:
			printbook(bookshelf);
			break;
		case 3:
			search(bookshelf);
			break;
		case 4:
			remove(bookshelf);
			break;
		case 5:
			exit(bookshelf);
			cout << "Exit" << endl;
			break;
			
		default:
			break;
		}
	}

	return 0;
}
