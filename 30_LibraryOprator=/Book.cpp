#include "Book.h"

Book::Book()
{
	id = 0;
	title = "no title";
	year = 0;
	author = "no author";
	pages = 0;
	genre = None;
}

void Book::ShowInfo() const
{
	cout << "Id : " << id << endl;
	cout << "Title : " << title << endl;
	cout << "Author : " << author << endl;
	cout << "Pages : " << pages << endl;
	cout << "Genre : ";
	switch (genre)
	{
	case None:cout << "None" << endl;break;
	case History:cout << "History" << endl;	break;
	case Comedy:cout << "Comedy" << endl;break;
	case Horror:cout << "Horror" << endl;break;
	case Novel:cout << "Novel" << endl;break;
	case Roman:cout << "Roman" << endl;	break;
	case Fantasy:cout << "Fantasy" << endl;	break;
	case ScienceFiction:cout << "ScienceFiction" << endl;break;
	case Detective:cout << "Detective" << endl;break;
		
	}
	cout << "___________________________________________" << endl;
}
