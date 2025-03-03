#include <iostream>
using namespace std;

int main()
{
    int size = 10;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i >= j && i + j >= size - 1)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "|###|";
        }
        cout << endl;
    }


    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << " + ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << " #";
        }
        cout << endl;
    }
    cout << endl;
    int N = 8;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                cout << " #";
            else
                cout << " =";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ( i + j == N -1)
                cout << " #";
            else
                cout << " =";
        }
        cout << endl;
    }
   
}

