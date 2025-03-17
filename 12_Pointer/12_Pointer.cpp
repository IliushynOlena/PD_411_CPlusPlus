#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	//pointer  --> вказівник 
	int* pa = &a;
	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;

	int b = 10;
	int* pb = &b;
	cout << "b = " << b << endl;
	cout << "pb = " << pb << endl;
	cout << "*pb = " << *pb << endl;

	cout << a + b << endl;
	cout << *pa + *pb << endl;


	pa = &b;
	cout << "*pa = " << *pa << endl;
	b += 2;
	*pa += 2;
	cout << "b = " << b << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;


	const int size = 5;
	int arr[size];
	/*int* parr = &arr[0];
	
	for (int i = 0; i < size; i++)
	{
		*(parr + i) = rand() % 100;
	}

	for (int i = 0; i < size; i++)
	{
		cout << *(parr + i) << " ";
	}
	cout << "Address first element "<<  parr << endl;
	cout << "Address first element "<<  arr << endl;
	cout << " first element "<<  *parr << endl;
	cout << "Address second element " << parr + 1 << endl;
	cout << " second element " << *(parr + 1) << endl;*/

	int* p_arr = arr;
	for (int i = 0; i < size; i++)
	{
		*p_arr = rand() % 100;
		p_arr++;
	}
	p_arr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *(p_arr + i) << " ";
	}

	int* newptr = arr;
	*newptr = 0;
	newptr += 3;
	*newptr = 0;
	cout << endl;
	p_arr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *p_arr << " ";
		p_arr++;
	}
	p_arr--;
	for (int i = 0; i < size; i++)
	{
		cout << *p_arr << " ";
		p_arr--;
	}

		









}

