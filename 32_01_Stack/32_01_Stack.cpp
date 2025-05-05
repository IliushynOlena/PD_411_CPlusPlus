#include <iostream>
using namespace std;
class Test{};
class Stack
{
    enum { EMPTY = -1, FULL = 9};
    int arr[FULL + 1];//10
    int topIndex;
public:
    //default
    //delete
    //c-tor default
    //destructor
    //c-tor copy
    //move c-tor
    //operator =
   
   
    Stack()
    {
        topIndex = EMPTY;
    }
    Stack(const Stack& other) = delete;
   
    bool Push(int elem)
    {
        if (!IsFull())
        {
            ++topIndex;
            arr[topIndex] = elem;
            //vs
            //arr[++topIndex] = elem;
            return true;
        }
        return false;
    }
    bool IsFull()const
    {
        return topIndex == FULL;
    }
    bool IsEmpty()const
    {
        return topIndex == EMPTY;
    }
    int Pop()
    {
        if (!IsEmpty())
            //int value = arr[topIndex];
            // topIndex--;
            //return value;
            return arr[topIndex--];//           
    }
    int GetCount()const
    {
        return topIndex + 1;
    }
    void Clear()
    {
        topIndex = EMPTY;
    }
    void Print()const
    {
        for (int i = 0; i < GetCount(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Stack() = default;//  ~Stack(){}
};

int main()
{
    Stack st;
    st.Push(15);
    st.Push(7);
    st.Push(4);
    st.Print();
    cout << "Count : " << st.GetCount() << endl;

    while (!st.IsEmpty())
    {
        cout << st.Pop() << endl;
    }
    cout << "Count : " << st.GetCount() << endl;

    //Stack copy(st);
}

