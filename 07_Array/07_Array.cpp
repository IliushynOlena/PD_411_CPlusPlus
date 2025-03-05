#include <iostream>
using namespace std;

int main()
{
    //Помилка на етапі компіляції
    /*int a = 10
    cout << a << endl;*/
    
    //Помилка на етапі виконання

    //F10 - start debuger move line by line
    //int a = 0, b = 0;
    //cout << "Enter number a : ";
    //cin >> a;
    //cout << "Enter number b : ";
    //cin >> b;
    //// ставимо точку зупинки F9 --> F5
    //float c = (float) a / b;
    //cout << "Result = " << c << endl;

    //for (int i = 1; i < 333; i++)
    //{
    //    cout << "Result" << i << endl;
    //}
    /*
    //Масив — це набір однотипних даних, об'єднаний загальним ім'ям.
    int train[3];
    train[0] = 3;
    train[1] = 5;
    train[2] = 4;
    cout << train[0] << endl;
    cout << train[1] << endl;
    cout << train[2] << endl;

    const int size = 12;
    int marks[size];
    marks[0] = 8;
    marks[1] =11;
    marks[2] = 12;
    marks[3] = 6;
    marks[4] = 9;
    marks[5] = 12;
    marks[6] = 12;
    marks[7] = 12;
    marks[8] = 12;
    marks[9] = 12;
    marks[10] = 12;
    marks[11] = 10;
    int number = 0;
    cout << "Enter number of mark ";
    cin >> number;
    cout << "Your mark = " << marks[number-1] << endl;

    ///1 - create arr
    int arr[5];
    //2 - create arr
    const int size = 5;
    double new_arr[size];

    */
    /*
    //Варіанти ініціалізації масиву

    //Перший спосіб — ініціалізація при створенні.
    const int size = 5;
    int arr[size] = { 1,30,5,4,7};
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[] = { 10,11,12,13,14,15,16,17 };
    ////cout << arr2;
    for (int i = 0; i < 8; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int arr3[10] = { 1,2,3,4 };
    for (int i = 0; i < 10; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    int arr4[10] = {};
    for (int i = 0; i < 10; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;
    //Другий спосіб — ініціалізація масиву за допомогою  циклу.

    const int SIZE = 5;
    int arr5[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter " << i + 1 << " element ";
        cin >> arr5[i];
    }

    for (int i = 0; i <SIZE; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;
    */
    //Написати програму, яка знаходить суму всіх від'ємних  значень у масиві.

    const int size = 10;
    //int arr[size] = { 5,8,-9,4,-71,-6,23,9,3,12 };
    int arr[size] = { 5,8,19,4,71,6,23,9,3,12 };
    int summa = 0;
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            summa += arr[i];
            cout << "Negative element : " << arr[i] << endl;
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Summa negative elements = " << summa << endl;
    cout << "Max element = " << max << endl;
    cout << "Min element = " << min << endl;




}

