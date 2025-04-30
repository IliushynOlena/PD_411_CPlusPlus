#include "Library.h"

Library::Library()
{
	name = "no name";
	books = nullptr;
	countBook = 0;
}

Library::Library(string name)
{
	this->name = name;
	books = nullptr;
	countBook = 0;
}

 Library::Library(const Library& other)
{
	//Copy constructor
	this->name = other.name;
	//this->books = other.books;
	this->books = new Book[other.countBook];
	for (int i = 0; i < other.countBook; i++)
	{
		this->books[i] = other.books[i];
	}
	this->countBook = other.countBook;
}

 Library::Library(Library&& other)
{
	//Move constructor
	this->name = other.name;
	this->countBook = other.countBook;
	this->books = other.books;
	other.books = nullptr;
}

 Library& Library::operator=(const Library& other)
{
	this->name = other.name;
	this->countBook = other.countBook;
	if (books != nullptr)
		delete[]books;
	this->books = new Book[countBook];
	for (int i = 0; i < countBook; i++)
	{
		this->books[i] = other.books[i];
	}
	return *this;
}

void Library::AddBook(Book book)
{
	countBook++;
	Book* temp = new Book[countBook];
	for (int i = 0; i < countBook - 1; i++)
	{
		temp[i] = books[i];
	}
	temp[countBook - 1] = book;
	if (books != nullptr)
		delete[]books;
	books = temp;
}

void Library::Show() const
{
	cout << "Name : " << name << endl;
	cout << "Count book : " << countBook << endl;
	for (int i = 0; i < countBook; i++)
	{
		books[i].ShowInfo();
	}
}
