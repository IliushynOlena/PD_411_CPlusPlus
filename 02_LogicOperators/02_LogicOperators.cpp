#include <iostream>
using namespace std;


int main()
{
    /*
    cout << "Hello World!\n";
    
    //operator 
    //унарні оператори  -5 -1 -9 +6
    //бінарні оператори 2 * 2 + - * /  % 
    //тернарний оператор

    //інкремент ++
    int a = 5;
    cout << "a = " << a << endl;
    a++;//постфіксна форма інкременту
    //a += 1;//a = a + 1;
    cout << "a = " << a << endl;
    ++a;//префіксна форма інкременту 
    cout << "a = " << a << endl;

    //декремент --
    //a = a - 1;
    //a -= 1;
    a--;//постфіксна форма декремент
    cout << "a = " << a << endl;
    --a;//префіксна форма декремент 
    cout << "a = " << a << endl;

    int b = 7;
    cout << ++b << endl;
    cout << b++ << endl;
    cout << b << endl;

    int c = 10;
    cout << "c = " << c << endl;
    c += 12;//c = c + 12;
    cout << "c = " << c << endl;
    c -= 12;//c = c - 12;
    cout << "c = " << c << endl;
    c *= 12;//c = c * 12;
    cout << "c = " << c << endl;
    c /= 12;//c = c / 12;
    cout << "c = " << c << endl;
    c %= 12;//c = c % 12;
    cout << "c = " << c << endl;

    int x = 10;
    short y = 2;
    float d = 3.33;
    double p = 1.14556655;
    char ch = 'a';


    //звужуюче перетвореня від одного типу даних до іншого     
    int A = 23.5;
    cout << "A = " << A << endl;


    //розширююче перетвореняя від одного типу даних до іншого
    unsigned int B = 3000000000;
    double X = 3.21;
    cout << "X = " << X << endl;

    //Класифікація за способом здійснення перетворення
    //1. Неявне перетворення.
    int F = 23.5;
    cout << "F = " << F << endl;

    //2. Явне перетворення

    double k = 37.4;
    cout << " k = " << k << endl;
    float r =(int) k;//double ----> float 37.4000000000000000 --> 37.00000000

   /* int number;
    cout << "Enter number : ";
    cin >> number;
    float res = number / 100.0;
    cout << number << " / " << "100 " << " = " << res << endl;*/

    //Уніфікована ініціалізація
  /*  int num1 = { 11.3 };
    int num2 { 33.6 };
    cout << num1 << " " << num2 << endl;*/

   /* 
   1. Оператори порівняння;
   2. Оператори рівності;
   3. Логічні оператори об'єднання та негативна інверсія.
   true = 1
   false = 0
   */
    /*
    cout << (3 < 2) << endl;
    cout << (5 > 3) << endl;

    cout << (5 != 3) << endl;
    cout << (3 == 2) << endl;
    */

    /*
    if (true)
    {
        //дія 1;
    }
    else
    {
        //дія 2;
    }
    float a, b;
    cout << "Enter number a : ";
    cin >> a;
    cout << "Enter number b : ";
    cin >> b;
    float res;
    if (b == 0) 
    {
        cout << "You can*t divide by zero!!!!" << endl;
    }
    else 
    {
        res = a / b;
        cout << "Result = " << res << endl;
    }

    //Тернарний оператор
   //ТВЕРДЖЕННЯ АБО ВИРАЗ ? ДІЯ1 : ДІЯ2;
    (b == 0) ? cout << "You can*t divide by zero!!!!" << endl : cout << "Result = " << a / b << endl;
    (b != 0) ? cout << "Result = " << a / b << endl : cout << "You can*t divide by zero!!!!" << endl;

    int age;
    cout << "Enter age : ";
    cin >> age;
    if (age > 0 && age < 125)
    {
        cout << "Age is correct" << endl;
    }
    else 
    {
        cout << "Error age" << endl;
    }
   
    int a,b;
    int max, min;
    cout << "Enter number a : ";
    cin >> a;
    cout << "Enter number b : ";
    cin >> b;
    cout << "a = " << a << " b = " << b << endl;
    if (a > b) 
    {
        max = a;
    }
    else 
    {
        max = b;
    }
    max = (a > b) ? a : b;
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    min = (a < b) ? a : b;
    cout << "max = " << max << " min = " << min << endl;
    */
    int month;
    cout << "Enter number of month : ";
    cin >> month;
    if (month == 1)
    {
        cout << "January " << endl;
    }
    else if (month == 2)
    {
        cout << "February " << endl;
    }
    else if (month == 3)
    {
        cout << "March " << endl;
    }
    else if (month == 4)
    {
        cout << "April " << endl;
    }
    else if (month == 5)
    {
        cout << "May " << endl;
    }
    else if (month == 6)
    {
        cout << "June " << endl;
    }
    else if (month == 7)
    {
        cout << "July " << endl;
    }
    else if (month == 8)
    {
        cout << "August " << endl;
    }
    else
    {
        cout << "Error month" << endl;
    }
  


}

