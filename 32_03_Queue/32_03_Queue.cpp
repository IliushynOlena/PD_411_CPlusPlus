#include <iostream>
#include <conio.h>
using namespace std;

class Queue
{
    int* arr;
    int maxSize;
    int topIndex;
public:
    Queue() = default;
    Queue(int max)
    {
        this->maxSize = max;
        arr = new int[maxSize];
        topIndex = 0;
    }
    bool IsEmpty()const
    {
        return topIndex == 0;
    }
    bool IsFull()const
    {
        return topIndex == maxSize;
    }
    void Enqueue(int elem)
    {
        if (!IsFull())
        {
            arr[topIndex++] = elem;
        }
    }
   /* int Dequeue()
    {
        if (!IsEmpty())
        {
            int first = arr[0];
            for (int i = 0; i < topIndex; i++)
            {
                arr[i] = arr[i + 1];
            }
            topIndex--;
            return first;
        }
    }*/
    int Dequeue()
    {
        //кругова черга 
        if (!IsEmpty())
        {
            int first = arr[0];
            for (int i = 0; i < topIndex; i++)
            {
                arr[i] = arr[i + 1];
            }
            //topIndex--;
            arr[topIndex - 1] = first;
            return first;
        }
    }
    int GetCount()
    {
        return topIndex;
    }
    void Clear()
    {
        topIndex = 0;
    }

    void Show()
    {
        for (int i = 0; i < topIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue()
    {
        if (arr != nullptr)
            delete[]arr;
    }

};
int main()
{
    Queue q1;
    Queue q(25);
    for (int i = 0; i < 10; i++)
    {
        q.Enqueue(rand() % 50);
    }
    q.Show();
    int num;
    char s;
    cin >> num;
    while (!q.IsEmpty())
    {
        cout << "Element : " << q.Dequeue() << endl;
        _getch();

        /*s = _getch();
        cout << "Symbol : " << s << endl;*/
    }
}

