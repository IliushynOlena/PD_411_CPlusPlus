#include<iostream>

using namespace std;

void main() 
{
	//Ctrl+Alt + L - якщо немає папок
	//Ctrl+D - dublicate row 
	//Ctrl+ K + C - comment
	//Ctrl+ K + U - uncomment
	/*cout << "Hello world";
	cout << "Hello world";*/
	//  \n
	//  \t
	//  \\
	//  \'
	//  \"
	cout << "Hello world\n";
	cout << "\tHello world\n";
	cout << "\t\tHello world\n";
	cout << "\"Hello world\"\n";
	//cout << 'Hello world'; - error
	cout << "\\Hello world\\\n";
	cout << "/Hello world/\n";
	cout << "\'Hello world\'\n";
	cout << "Hello world\n";

	int age = 15;
	cout << "age = "<< age << "\n";
	int Age = 25;
	cout << "Age = " << Age << endl;
	int ageOfHuman = 40;
	int age_of_human = 35;
	int a = 15;
	//int int = 7; error
	/*int a = 5;*/
	int a1 = 15;
	int a2 = 25;
	//int 3a = 14; error
	int _count = 25;
	age = 155;
	cout << "age = " << age << "\n";
	const float PI = 3.14;
	cout << "PI = " << PI << endl;
	/*PI = 0.33; -- error
	cout << "PI = " << PI << endl;*/
	double num = 3.333333333333333333;

	float discount = 0.05;
	float cost = 25.99;
	cout << "Ennter cost of product : ";
	cin >> cost;
	int count = 5;
	cout << "Enter count : ";
	cin >> count;
	
	float price;
	price = count * cost -  count * cost * discount;
	cout << "You have to pay : " << price << endl;


	int number;
	cout << "Enter number : ";
	cin >> number;

	cout << "Number = " << number << endl;

	
}


