
#include <iostream>
using namespace std;

int main()
{
	/*
	Цикл з передумовою(while);
	Цикл з постумовою(do...while); //while True ..if break
	Цикл з параметрами(for).
	*/
	int counter = 1;
	while (counter <= 7)
	{
		cout << "You have seen the " << counter <<
			" Wonder of the world!!!\n";
		counter++;
	}
	cout << "Now, you can begin your essay.\n";

	/*
	float a, b, res;
	int key;///key = 1, key = 2, key = 3, key = 4
	cout << "Choose operation : " << endl;
	cout << "[ 1 ] - If you want to Add two number " << endl;
	cout << "[ 2 ] - If you want to Deduct two number " << endl;
	cout << "[ 3 ] - If you want to Multiply two number " << endl;
	cout << "[ 4 ] - If you want to Divide two number " << endl;
	cout << "[ 0 ] - Exit " << endl;
	cin >> key;
	//key = number or char
	//Ctrl + A , Ctrl + K, Ctrl + F
	while (key != 0)
	{

		switch (key)
		{
		case 1:
			cout << "Enter a : ";cin >> a;
			cout << "Enter b : ";cin >> b;
			res = a + b;
			cout << "Answer : " << a << " + " << b << " = " << res << endl;
			break;
		case 2:
			cout << "Enter a : "; cin >> a;
			cout << "Enter b : "; cin >> b;
			res = a - b;
			cout << "Answer : " << a << " - " << b << " = " << res << endl;
			break;

		case 3:
			cout << "Enter a : "; cin >> a;
			cout << "Enter b : "; cin >> b;
			res = a * b;
			cout << "Answer : " << a << " * " << b << " = " << res << endl;
			break;

		case 4:
			cout << "Enter a : "; cin >> a;
			cout << "Enter b : "; cin >> b;
			if (b != 0)
			{
				res = a / b;
				cout << "Answer : " << a << " / " << b << " = " << res << endl;
			}
			else
			{
				cout << "\nError! You cannot divide by "
					"zero!\n";
			}
			break;
		case 0:
			cout << "Have a nice!!!" << endl;
			break;
		default:
			cout << "Wrong choice......" << endl;
			break;
		}

		cout << "Choose operation : " << endl;
		cout << "[ 1 ] - If you want to Add two number " << endl;
		cout << "[ 2 ] - If you want to Deduct two number " << endl;
		cout << "[ 3 ] - If you want to Multiply two number " << endl;
		cout << "[ 4 ] - If you want to Divide two number " << endl;
		cout << "[ 0 ] - Exit " << endl;
		cin >> key;
	}

	*/
	int i = 0;
	while (true)
	{
		cout << i << endl;
		i++;
		if (i == 10)
			break;
	}
	float a, b, res;
	int key;///key = 1, key = 2, key = 3, key = 4

	do
	{
		cout << "Choose operation : " << endl;
		cout << "[ 1 ] - If you want to Add two number " << endl;
		cout << "[ 2 ] - If you want to Deduct two number " << endl;
		cout << "[ 3 ] - If you want to Multiply two number " << endl;
		cout << "[ 4 ] - If you want to Divide two number " << endl;
		cout << "[ 0 ] - Exit " << endl;
		cin >> key;
		switch (key)
		{
		case 1:
			cout << "Enter a : "; cin >> a;
			cout << "Enter b : "; cin >> b;
			res = a + b;
			cout << "Answer : " << a << " + " << b << " = " << res << endl;
			break;
		case 2:
			cout << "Enter a : "; cin >> a;
			cout << "Enter b : "; cin >> b;
			res = a - b;
			cout << "Answer : " << a << " - " << b << " = " << res << endl;
			break;

		case 3:
			cout << "Enter a : "; cin >> a;
			cout << "Enter b : "; cin >> b;
			res = a * b;
			cout << "Answer : " << a << " * " << b << " = " << res << endl;
			break;

		case 4:
			cout << "Enter a : "; cin >> a;
			cout << "Enter b : "; cin >> b;
			if (b != 0)
			{
				res = a / b;
				cout << "Answer : " << a << " / " << b << " = " << res << endl;
			}
			else
			{
				cout << "\nError! You cannot divide by "
					"zero!\n";
			}
			break;
		case 0:
			cout << "Have a nice!!!" << endl;
			break;
		default:
			cout << "Wrong choice......" << endl;
			break;
		}


	} while (key!=0);

}

