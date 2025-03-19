#include <iostream>
using namespace std;

void ChangeVariable(int a)// 0  ---> int a = 0;
{
    a++;
}
void ChangeVariable(int* a)//0x25467987
{
    (*a)++;   
}
int FindMax(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    if (b > c && b > a)
    {
        return b;
    }
    return c;
}
int* FindMax(int* a, int* b, int *c)
{
    if (*a > *b && *a > *c)
    {
        return a;
    }
    if (*b > *c && *b > *a)
    {
        return b;
    }
    return c;
}
void FillArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}.void ShowArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<< *(arr + i)<< " ";
    }
    cout << endl;
}
int* FindMax(int* arr, int size)
{
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max) 
        {
            max = arr + i;
        }
    }
    return max;
}

int main()
{
    srand(time(0));
    const int size = 10;
    int arr[size];
   
    FillArr(&arr, size);
    ShowArr(arr, size);

    int* max = FindMax(arr, size);
    cout << "Max = " << *max << endl;

    *max = (*max) * 2;
    ShowArr(arr, size);
    /*
    int a = 0;
    int* pa = &a;  
    cout << "a = " << a << endl;
    ChangeVariable(a);
    cout << "a = " << a << endl;
    //ChangeVariable(pa);
    ChangeVariable(&a);
    cout << "a = " << a << endl;

    int x = 0, y = 0, z = 0;
    cout << "Enter x, y , z : ";
    cin >> x >> y >> z;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    int max = FindMax(x, y, z);
    cout << "Max = " << max << endl;
    max++;
    cout << "Max = " << max << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    int * pmax = FindMax(&x, &y, &z);
    cout << "pmax = " << pmax << endl;
    (*pmax)++;
    cout << "max = " << *pmax << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    */
}
