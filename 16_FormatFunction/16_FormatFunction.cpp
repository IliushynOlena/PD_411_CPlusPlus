#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}



int main()
{
    srand(time(0));
    for (int i = 0; i < 16; i++)
    {
        SetColor(i);
        cout << "Hello World!\n";

    }
    Sleep(5000);
    system("cls");//затирає екран
    SetPos(5, 10); cout << "Hello World!\n";
    /*  for (int i = 0; i < 16; i++)
      {
          SetColor(i);//встановлює колір
          SetPos(rand()%50, rand() % 50);//встановлює курсор в задані координати
          cout << "*";
          Sleep(300);//затримку екрану

      }*/
      //cout << endl;
      //SetColor(5); cout << "Hello World!\n"; SetColor(7);
      //cout << "Hello World!\n";
      //cout << "Hello World!\n";
      ////setw(n) - n = number - кількість комірок зарезервованих в консольці
      //cout << "AA" << setw(3) <<  endl;
      //cout << setw(3) << "AA" <<   endl;
      //cout << "B" << endl;
      //cout << "C" << endl;
      //double x = -5, y = 2.7, z = 3.14;
      ////cout << left<< setw(5)<< x << endl;
      //cout << setw(5)<< x << endl;
      //cout << setw(5) << y << endl;
      //cout << setw(5) << z << endl;


      //const int row = 15, col = 20;
      //int arr[row][col];
      //for (int i = 0; i < row; i++)
      //{
      //    for (int j = 0; j < col; j++)
      //    {
      //        arr[i][j] = rand() % 100;
      //        cout << setw(4)<< arr[i][j];
      //    }
      //    cout << endl;
      //}
      ////int a = (int) 2.56;
      //for (int i = 0; i <= 255; i++)
      //{
      //    cout << "code = " << i << " char = " << (char)i << endl ;
      //}




}

