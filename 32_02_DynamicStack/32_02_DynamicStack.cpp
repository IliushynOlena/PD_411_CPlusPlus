#include <iostream>
using namespace std;

class Stack {
	enum{EMPTY = -1};
	int* arr;
	int size;
	int topIndex;
public:
	Stack() = delete;
	
	Stack(int size):size(size)//100
	{
		arr = new int[size];
		topIndex = EMPTY;
	}
	bool IsFull()const
	{
		return topIndex == size - 1;
	}
	bool Push(int elem)
	{
		if (!IsFull())
		{
			arr[++topIndex] = elem;
			return true;
		}
		return false;
	}
	bool IsEmpty()const
	{
		return topIndex == EMPTY;
	}
	int Pop()
	{
		if (!IsEmpty())
		{
			return arr[topIndex--];
		}
	}
	int Peek()
	{
		if (!IsEmpty())
		{
			return arr[topIndex];
		}
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
	~Stack()
	{
		if (arr != nullptr)
			delete[]arr;
	}
};

int main()
{
	Stack st(15);

	while (!st.IsFull())
	{
		st.Push(rand() % 100);
	}
	st.Print();
	cout << "Length : " << st.GetCount() << endl;
	while (!st.IsEmpty())
	{
		cout << "Element delete - "<<  st.Pop() << endl;
	}
	cout << "Count : " << st.GetCount() << endl;
   

}

