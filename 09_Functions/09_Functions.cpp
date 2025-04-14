#include <iostream>
using namespace std;

//1.create function
//2.prototype function 
void Hello()
{
    cout << "Hello , world" << endl;
}

void Star(int count)
{
    Hello();
    for (int i = 0; i < count; i++)
    {
        cout << "*";
    }
    cout << endl;
}
void AnyLine(char symbol, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << symbol;
    }
    cout << endl;
}
int myPow(int number, int pow)//2**3
{
    int step = 1;
    for (int i = 0; i < pow; i++)
    {
        step *= number;
    }
    return step;
    //Не можна створювати одну функцію всередині іншої.
   /* void Test() -- 
    {
        cout << "jkdghkjdgh";
    }*/
}

int Max(int a, int b)
{
    return (a > b) ? a : b;
   /* if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }*/
        
    //return; --> break;
}

//float Test()
//{
//    cout << "Hello , world" << endl;
//}
int Min(int a, int b)
{
    return a < b ? a : b;
}

void Change(int one, int two)
{
    cout << "One : " << one << " .  Two : " << two << endl;
    int temp = one;
    one = two;
    two = temp;
    cout << "One : " << one << " .  Two : " << two << endl;
}

void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}

void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
       cout<<  arr[i] <<" ";
    }
    cout << endl;
}
int SummaArray(int arr[], int size)
{
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        summa += arr[i];
    }
    return summa;
}
void InitMatrix(int arr[][4], int row, int col);
void ShowMatrix(int arr[][4], int row, int col);
int SummaMatrix(int arr[][4], int row, int col);
int B;//B = 0
int A = 99;//global variable
void SetA()
{
    A = 1000;
}
void ShowA()
{
    cout << A << endl;
}
void SetSecondA()
{
    int A = 1;
    cout << A << endl;
}

void StarDefault(int count = 20)
{
    Hello();
    for (int i = 0; i < count; i++)
    {
        cout << "*";
    }
    cout << endl;
}
//void Foo(int i, int j = 7 )
//{
//    cout << i << "   " << j << endl;
//}
//void Foo(int i, int j = 7, int k)//error
//{
//    cout << i << "   " << j << "    "<< k<< endl;
//}
void Foo(int i, int j = 7, int k = 77)
{
    cout << i << "   " << j << "    "<< k<< endl;
}
void SomeFunction()
{
    //статичну локальну змінну.
    static int a = 0;
    a++;
    cout << a << endl;
}

bool isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return true; //divider mod input number = 0 not prime

    return false;
}
int main()
{
    SomeFunction();//1
    SomeFunction();//2
    SomeFunction();//3
    SomeFunction();//4
    SomeFunction();//5
    SomeFunction();//3
   /* Foo(5, 8);
    Foo(1);*/
  /*  Foo(5, 7, 9);
    Foo(5, 17);
    Foo(5);*/



/*
    StarDefault(10);
    StarDefault(15);
    StarDefault();
    ShowA();
    SetA();
    ShowA();
    SetSecondA();
    ShowA();
    int A = 10;//local variable 
    cout << A << endl;
    ::A = 333;
    cout << "gloabal variable "<<  ::A << endl;

    int num = 5;
    if (num == 5)
    {
        int dig = 3;
        cout << dig << endl;
    }
    //cout << dig << endl;
  
    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    cout << "Summa elements = " << SummaArray(arr, size) << endl;

    const int row = 3;
    const int col = 4;
    int matrix[row][col];
    InitMatrix(matrix, row, col);
    ShowMatrix(matrix, row, col);
    cout << "Summa elements = " << SummaMatrix(matrix, row, col) << endl;

    int a = 1, b = 7;
    cout << "a : " << a << " .  b : " << b << endl;
    Change(a, b);
    cout << "a : " << a << " .  b : " << b << endl;





    int max = Max(5, 15);
    cout << "Max = " << max << endl;
    int min = Min(3, 45);
    cout << "Min = " << min << endl;

  /*  Hello();
    Hello();
    Hello();
    Hello();*/
/*
    Star(3);
    Star(10);
    //Start();error
    AnyLine( '=',15);
    AnyLine( '+',5);

    cout<< "Pow = "<<myPow(2, 3)<<endl;
    int pow = myPow(5, 5);
    cout << "Pow = " << pow << endl;
*/
   



    
}


//2.create function

void InitMatrix(int arr[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 90 + 10;//10...99
        }
    }
}
void ShowMatrix(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int SummaMatrix(int arr[][4], int row, int col)
{
    int summa = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            summa += arr[i][j];
        }
    }
    return summa;
}

