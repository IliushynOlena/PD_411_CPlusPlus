#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;


int main()
{
	char s = 'a';//one symbol 
	cout << s << endl;
	// C-style lines 
	//string name;

	//char mystring[] = { 'C','a','t','!','\0' };
	//for (int i = 0; i < 4; i++)
	//{
	//	cout << mystring[i];
	//}

	char mystring[] = "string";//string\0
	cout << mystring << " has " << sizeof(mystring) << " characters " << endl;

	//mystring = "Cat";//error
	//mystring[1] = 'p';
	//cout << mystring << endl;
	//int arr[] = { 1,2,3,4 };
	//arr = 7;//error

	//char name[15] = "Max";//3 + \0 = 4
	//cout << "Name = " << name << endl;

	//char myname[255];
	//cout << "Enter name : ";
	////cin >> myname;
	//cin.getline(myname, 255);
	//cout << "Name = " << myname << endl;

	//Functions
	char text[] = "Print this!";
	char copy[50];
	strcpy_s(copy, text);
	cout << "Original : " << text << endl;
	cout << "Copy : " << copy << endl;

	char name[15] = "Max";//3 + \0 = 4
	cout << "Name = " << name << endl;
	cout << "Size = " << sizeof( name) << endl;
	cout << "Str length = " << strlen( name) << endl;

	char arr[255] = "Returns the head of a list.";
	cout << arr << endl;
	cout << "Length = " << strlen(arr) << endl;
	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;

	cout << "Copy array : " << endl;
	char arr2[255];
	strcpy_s(arr2, arr);
	cout << arr2 << endl;
	arr2[3] = '\0';
	cout << arr2 << endl;
	cout << "Add to array : " << endl;
	cout << arr << endl;
	strcat_s(arr, ".......");
	cout << arr << endl;
	cout << "Enter text : ";
	cin >> arr2;
	strcat_s(arr, arr2);
	cout << arr << endl;
	

   




}

