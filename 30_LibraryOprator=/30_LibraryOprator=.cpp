#include"Library.h"

Library& TestLibrary(Library& lib)//copy constructor
{
    Library temp = lib;
    return temp;//copy constructor
}

class Test
{
    //default constructor
    //destructor 
    //copy constructor
    //operator =
};
int main()
{
   /* Book k;
    k.ShowInfo();*/
    Book book1(1,"C++ for Begginers", 2000, "Stiven Prata",  1500, ScienceFiction);
  /*  Book book2(2,"Harry Potter", 1997, "J.K.Rowling",  800, Fantasy);
    Book book3(3,"Sherlock Holmes", 1887, "Arthur Conan Doyle", 2000, Genre::Detective);
    Book book4(4,"Java for kids", 2015, "Morgan Nick",408, ScienceFiction);
    Book book5(5,"Mowgli", 1893, "Pantera", 500, Genre::Fantasy);
    Book book6(6,"Financier", 1911, "Dreiser Theodore",  377, Genre::ScienceFiction);

    book1.ShowInfo();*/

    Library lib("For Youth");
    lib.AddBook(book1);
    lib.AddBook(Book(2, "Harry Potter", 1997, "J.K.Rowling", 800, Fantasy));
    lib.AddBook(Book(3, "Sherlock Holmes", 1887, "Arthur Conan Doyle", 2000, Genre::Detective));
    lib.AddBook(Book(4, "Java for kids", 2015, "Morgan Nick", 408, ScienceFiction));
    lib.AddBook(Book(5, "Mowgli", 1893, "Pantera", 500, Genre::Fantasy));
    lib.AddBook(Book(6, "Financier", 1911, "Dreiser Theodore", 377, Genre::ScienceFiction));
    lib.Show();

    cout << "Copy library " << endl;
    Library copy_lib(lib);
    copy_lib.Show();

   Library newLib =  TestLibrary(lib);
   newLib.Show();
   cout << "--------------- Operator = --------------" << endl;
   Library lib2 = lib;
   lib2.Show();

   Library lib3;
   lib3 = lib2 = lib;//<-------------------



}
