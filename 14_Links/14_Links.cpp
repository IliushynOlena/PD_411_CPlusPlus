#include <iostream>
using namespace std;
void ChangeVariable(int& a)// 
{
    a++;
}
int& FindMax(int& a, int& b)
{
   /* if (a > b )
    {
        return a;
    }
    if ( b > a)
    {
        return b;
    }*/
    int c = 5;
    return c;   
}
void FillArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}
void ShowArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
int& FindMax(int* arr, int size)
{
    int max = arr[0];
    int index_max = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
            index_max = i;
        }
    }
    //max= 81; index_max = 5
    return arr[index_max];//81
}
int main()
{

    srand(time(0));
    const int size = 10;
    int arr[size];

    FillArr(arr, size);
    ShowArr(arr, size);

    int max = FindMax(arr, size);
    cout << "Max = " << max << endl;
    ShowArr(arr, size);
    FindMax(arr, size) = 0;
    ShowArr(arr, size);

    //int a = 0, b = 0;
    //cout << "a = " << a << endl;
    //ChangeVariable(a);
    //cout << "Enter a and b : ";
    //cin >> a >> b;
    //cout << "a = " << a << endl;
    //cout << "b = " << b << endl;
    //int& lmax =  FindMax(a, b);
    //cout << " lmax = " << lmax << endl;
    //cout << "a = " << a << endl;
    //cout << "b = " << b << endl;
    //lmax = 1;
    ////FindMax(a, b) = 1;
    //cout << "a = " << a << endl;
    //cout << "b = " << b << endl;



    //вказівник - комірка, яка зберігає адресу
    //як отримати значення по вказівнику - розіменувати вказівник *pa

    
    //int a = 10;
    ////int* pa = &a;
    //int* ptr = nullptr; //int* ptr = NULL;//int* ptr = 0;//int* ptr;
    //ptr = &a;
    //cout << "*ptr = " << *ptr << endl;
    //int b = 5;
    //ptr = &b;
    //cout << "*ptr = " << *ptr << endl;
    ////посилання (ссилка)
    //int c = 7;
    //int* pc = &c;
    //int& lc = c; // link - address
    //int& lb = b;
    //cout << "c " << c << endl;
    //cout << "pc " << pc << endl;
    //cout << "*pc " << *pc << endl;
    //cout << "lc " << lc << endl;
    //cout << "lb " << lb << endl;
    //cout << c + b << endl;
    //cout << lc + lb << endl;
    ///*lc = b;
    //cout << "lc " << lc << endl;*/
    ////int& ltest;








    
}

