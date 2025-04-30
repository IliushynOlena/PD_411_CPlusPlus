#pragma once

#include <iostream>
using namespace std;
/*
* Genre:
* none      0
* History   1
* Comedy    2
* Horror    3
* Novel     4
* Roman     5
* Fantasy   6
* Science fiction 7
*/
/*
 const int None = 0;
 const int History = 1;
 const int Comedy = 2;
 const int Horror = 3;
*/
enum Genre{ None , History, Comedy, Horror, Novel, Roman, Fantasy, 
	ScienceFiction, Detective
};
class Book
{
	int id;
	string title;
	int year;
	string author;
	int pages;
	Genre genre;
public:
	Book();//prototype 
	Book(int i, string t,int y, string a, int p, Genre g):id(i),title(t),
		year(y),author(a),pages(p),genre(g){}
	void ShowInfo()const;


};

