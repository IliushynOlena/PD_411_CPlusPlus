#include <iostream>
using namespace std;

int main()
{
	//float a, b, res;
	//cout << "Enter a : ";
	//cin >> a;
	//cout << "Enter b : ";
	//cin >> b;

	//char key;///key = '+', key = '-', key = '/', key = '*'
	//cout << "Choose operation : " << endl;
	//cout << "[ + ] - If you want to Add two number " << endl;
	//cout << "[ - ] - If you want to Deduct two number " << endl;
	//cout << "[ * ] - If you want to Multiply two number " << endl;
	//cout << "[ / ] - If you want to Divide two number " << endl;
	//cin >> key;

	//if (key == '+')
	//{
	//    res = a + b;
	//    cout << "Answer : " << a << " + " << b << " = " << res << endl;
	//}
	//else if (key == '-')
	//{
	//    res = a - b;
	//    cout << "Answer : " << a << " - " << b << " = " << res << endl;
	//}
	//else if (key == '*')
	//{
	//    res = a * b;
	//    cout << "Answer : " << a << " * " << b << " = " << res << endl;
	//}
	//else if (key == '/')
	//{
	//    if (b != 0)
	//    {
	//        res = a / b;
	//        cout << "Answer : " << a << " / " << b << " = " << res << endl;
	//    }
	//    else
	//    {
	//        cout << "\nError! You cannot divide by "
	//            "zero!\n";
	//    }       
	//}
	//else
	//{
	//    cout << "Wrong choice......" << endl;
	//}

	//Calculator variant  2
	/*float a, b, res;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;

	int key;///key = 1, key = 2, key = 3, key = 4
	cout << "Choose operation : " << endl;
	cout << "[ 1 ] - If you want to Add two number " << endl;
	cout << "[ 2 ] - If you want to Deduct two number " << endl;
	cout << "[ 3 ] - If you want to Multiply two number " << endl;
	cout << "[ 4 ] - If you want to Divide two number " << endl;
	cin >> key;

	if (key == 1)
	{
		res = a + b;
		cout << "Answer : " << a << " + " << b << " = " << res << endl;
	}
	else if (key == 2)
	{
		res = a - b;
		cout << "Answer : " << a << " - " << b << " = " << res << endl;
	}	
	else if (key == 3)
	{
		res = a * b;
		cout << "Answer : " << a << " * " << b << " = " << res << endl;
	}
	else if (key == 4)
	{
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
	}
	else
	{
		cout << "Wrong choice......" << endl;
	}
	*/
	
	///Calculator example 3
	/*float a, b, res;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;

	int key;///key = 1, key = 2, key = 3, key = 4
	cout << "Choose operation : " << endl;
	cout << "[ 1 ] - If you want to Add two number " << endl;
	cout << "[ 2 ] - If you want to Deduct two number " << endl;
	cout << "[ 3 ] - If you want to Multiply two number " << endl;
	cout << "[ 4 ] - If you want to Divide two number " << endl;
	cin >> key;
	//key = number or char
	switch (key)
	{
	case 1:
		res = a + b;
		cout << "Answer : " << a << " + " << b << " = " << res << endl;
		break;
	case 2:
		res = a - b;
		cout << "Answer : " << a << " - " << b << " = " << res << endl;
		break;

	case 3:
		res = a * b;
		cout << "Answer : " << a << " * " << b << " = " << res << endl;
		break;

	case 4:
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
	default:
		cout << "Wrong choice......" << endl;
		break;
	}
	*/
	///Calculator example 3
	/*float a, b, res;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;

	char key;///key = '+', key = '-', key = '/', key = '*'
	cout << "Choose operation : " << endl;
	cout << "[ + ] - If you want to Add two number " << endl;
	cout << "[ - ] - If you want to Deduct two number " << endl;
	cout << "[ * ] - If you want to Multiply two number " << endl;
	cout << "[ / ] - If you want to Divide two number " << endl;
	cin >> key;

	//key = number --> 1 or char  '*'
	switch (key)
	{
	
	case '+':
		res = a + b;
		cout << "Answer : " << a << " + " << b << " = " << res << endl;
		break;
	case '-':
		res = a - b;
		cout << "Answer : " << a << " - " << b << " = " << res << endl;
		break;

	case '*':
		res = a * b;
		cout << "Answer : " << a << " * " << b << " = " << res << endl;
		break;

	case '/':
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
	default:
		cout << "Wrong choice......" << endl;
		//break;
	
	}
	*/
	char grade;
	cout << "Input your letter grade : ";
	cin >> grade;

	switch (grade)
	{
	case 'A':case 'a':
		cout << "Your grade is 5" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Your grade is 4" << endl;
		break;
	case 'C':
	case 'c':
		cout << "Your grade is 3" << endl;
		break;
	case 'D':
	case 'd':
		cout << "Your grade is 2" << endl;
		break;
	case 'F':
	case 'f':
		cout << "Your grade is 1" << endl;
		break;
	default:
		cout << "This grade is invalid\n";
		break;
	}


	//const int USA = 1;
	//const int Ukraine = 380;
	//const int Italy = 39;
	//const int Austrailia = 61;

	//enum - це набір іменованих цілочисельних констант.
	enum countries{ USA = 1 , Ukraine = 380, Italy = 39, Austrailia = 61};

	//enum coins{penny = 0, nickel = 1, dime = 2, quarter = 3, half = 4, dollar_coin = 5};
	//enum coins{penny , nickel, dime , quarter = 25 , half= -1 , dollar_coin };
	enum coins{penny = 1 , nickel = 5, dime =10 , quarter = 25 , half= 50 , dollar_coin = 100};
	
	enum choice {Add = 1, Sub, Multy, Div};
	//char menu;
	//int menu;
	//choice Menu;
	//cout << "Enter menu : ";
	//switch (Menu)
	//{
	//case Add:
	//	break;
	//case Sub:
	//	break;
	//case Multy:
	//	break;
	//case Div:
	//	break;
	//default:
	//	break;
	//}
	//




	cout << USA <<endl;
	cout << Ukraine << endl;
	cout << Italy << endl;

	int coin;
	cout << "Enter value of coin : ";
	cin >> coin;
	switch (coin)
	{
	case penny:
		cout << "penny = 1 cent " << endl;
		// Доповнюємо вивід описом монети
		// На одній стороні є Авраам Лінкольн,
		// а Меморіал Лінкольна — на іншій.
		cout << "The obverse depicts Abraham Lincoln,"
			"and the reverse pictures "
			"the Lincoln Memorial." << endl;
		break;
	case nickel:
		cout << "nickel = 5 cents" << endl;
		// Доповнюємо вивід описом монети
		// На лицьовій стороні монети зображений
		// Томас Джефферсон, і Монтічелло на
		// зворотному боці.
		cout << "The obverse depicts "
			"Thomas Jefferson, and "
			"the reverse pictures Monticello."
			<< endl;
		break;
	case dime:
		cout << "dime = 10 cents" << endl;
		// Доповнюємо вивід описом монети
		// На лицьовій стороні монети зображений
		// Франклін Д. Рузвельт, і факел
		// на зворотному боці
		cout << "The obverse depicts Franklin D."
			"Roosevelt and the reverse"
			"pictures a torch oak and"
			"olive branches." << endl;
		break;
	case quarter:
		cout << "quater = 25 cents" << endl;
		// Доповнюємо вивід описом монети
		// На лицьовій стороні монети зображений
		// Джордж Вашингтон, і на зворотному боці -
		// або емблема Сполучених Штатів,
		// або дизайн одного з 50 штатів
		cout << "The obverse depicts George "
			"Washington, and the reverse "
			"pictures either America "
			"the Beautiful Quarters "
			"or State Quarter Series." << endl;
		break;
	case half:
		cout << "half = 50 cents " << endl;
		// Доповнюємо вивід описом монети
		// На лицьовій стороні монети зображений
		// Джон Ф. Кеннеді, а на зворотному боці -
		// велика печатка США.
		cout << "The obverse depicts John F. Kennedy"
			"and the reverse pictures the Seal of"
			"the President of the United "
			"States." << endl;
		break;
	case dollar_coin:
		cout << "large dollar = 100 cents" << endl;
		// Доповнюємо вивід описом монети
		// На ній зображена рідна американська
		// героїня Сакаджавея на лицьовій стороні і
		// білоголовий орлан — на зворотній.
		cout << "The obverse depicts Sacagawea, "
			"who is now an American symbol, "
			"and the reverse pictures a bald"
			"eagle." << endl;

		break;


	default:
		cout << "not found" << endl;
		break;
	}


}

