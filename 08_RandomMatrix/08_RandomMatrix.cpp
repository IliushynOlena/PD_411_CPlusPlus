#include <iostream>
using namespace std;

int main()
{
    /*
    //int start; 
    //cout << "Enter new start point : ";
    //cin >> start;
    ////srand(5);
    //srand(start);
    //time() - функція поверне кількість мілісекунд, що  минули з 1 січня 1970 року.
    srand(time(NULL));
    int a;
    //start = 1
    a = rand();//0......32767
    cout << "a = " << a << endl;

    a = rand();
    cout << "a = " << a << endl;

    a = rand();
    cout << "a = " << a << endl;
    //0......23 ..0....22
    //2300%23 = 0 2300/23= 100 100*23=2300 2300-2300 = 0
    //2301%23 = 1
    //2302%23 = 2
    //ЧИСЛО В ДІАПАЗОНІ ВІД НУЛЯ ДО Х: rand() % X
    for (int i = 0; i < 20; i++)
    {
        a = rand() % 10;//0......9
        cout << "a = " << a << endl;
    }
    //X = 11 .....Y = 16
    //ЧИСЛО В ДІАПАЗОНІ ВІД Х  ДО Y : rand() % (Y - X) + X
    for (int i = 0; i < 5; i++)
    {
        //(16-11) ---> 5 ...0 - 4
        a = rand() % (16-11) + 11;//0......9
        cout << "a = " << a << endl;
    }
    */
    srand(time(NULL));
    /*
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
   
    const int row = 10;
    const int col = 15;
    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //array[i][j] = rand() % 100;
            array[i][j] = rand() % 90 + 10;//10...100
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int array2[2][2] = { {1,2},{3,4} };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int array3[3][3] = { 1,2,3,4,5,6,7,8,9 };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int array4[3][3] = { {7,8},{9,5,4} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array4[i][j] << " ";
        }
        cout << endl;
    }
    */
    //Написати програму, яка у двовимірному масиві знаходить максимальний елемент кожного рядка.
    const int row = 5;
    const int col = 6;
    int array[row][col];
    int max;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //array[i][j] = rand() % 100;
            array[i][j] = rand() % 90 + 10;//10...100
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        max = array[i][0];
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
        cout << "Max element in row " << i << " = " << max << endl;

    }
    cout << endl;


   





}
