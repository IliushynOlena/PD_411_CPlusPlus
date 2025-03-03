#include <iostream>
using namespace std;

int main()
{
	/*int i = 0;
	while (i < 10)
	{
		i++;
		cout << i << " ";
	}
	cout << endl;*/
	/*
	//цикл з параметрами
	//1. Ініціалізація і створення змінної проводиться в циклі.
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	// 2. Створення змінної проводиться до циклу, а ініціалізація — у циклі.
	int x;
	for ( x = 0; x <= 10; x+=2)
	{
		cout << x << " ";
	}
	cout << endl;
	//3. Ініціалізація і створення змінної виконуються до циклу.
	float y = 0;
	for (   ; y <= 1; y+=0.2)
	{
		cout << y << " ";
	}
	cout << endl;

	for (int i = 1; i <= 5; )
	{
		cout << i << "  "; 
		i++;
	}
	cout << endl;

	for (int i = 0;   ; i++)
	{
		cout << i << " - ";
		if (i == 6)break;
	}	
	cout << endl;

	for (int i = 0; i <= 25; i++)
	{
		/*if (i % 2 != 0)
		{
			cout << i << "  ";
		}*/
		/*if (i % 2 == 0)
		{
			continue;
		}
		cout << i << "  ";
	}
	cout << endl;*/

	/*
	int magicNumber = 2;
	cout << "====================================" << endl;
	cout << "   My magic number beetwen 1 and 10 " << endl;
	cout << "====================================" << endl;
	int user_number = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter your number ----> ";
		cin >> user_number;
		if (user_number == magicNumber)
		{
			cout << "Congratulation!!!!!" << endl;
			break;
		}
		else
		{
			cout << "That is not my number" << endl;
		}
		if (i == 5)
		{
			cout << "Try again later!!!!!" << endl;
		}
	}
	*/
	int number;
	int sum = 0;
	for ( ;  ;  )// реалізація нескінченного циклу
	{
		cout << "Enter number : "; 
		cin >> number;
		if (number == 0)break;
		sum += number;
	}
	cout << "Suma all numbers = " << sum << endl;



}

