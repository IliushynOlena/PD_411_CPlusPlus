#include <iostream>
using namespace std;

class Array
{
	int* arr;
	int size;
public:
	Array()
	{
		arr = nullptr;
		size = 0;
	}
	explicit Array(int size)
	{
		this->size = size;
		arr = new int[size] {};
	/*	for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}*/
	}
	Array(const initializer_list<int> &list)
	{
		this->size = list.size();
		arr = new int[size];
		/*for (int i = 0; i < size; i++)
		{
			arr[i] = list[i];
		}*/
		int i = 0;
		//foreach
		for (int elem : list)
		{
			arr[i++] = elem;
		}
	}
	void Fill(const initializer_list<int>& list)
	{
		if (arr != nullptr)delete[]arr;
		this->size = list.size();//3
		arr = new int[size];//032xfg132f  --- 0sdfsdfds
		int i = 0;
		//foreach
		for (int elem : list)
		{
			arr[i++] = elem;
		}
	}
	~Array()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
int main()
{
   //Stack arr
	const int size = 5;
	int static_arr[size] = { 1,2,3,4,5 };
	//dynamic array
	int* dynam_arr = new int[5] {6, 7, 8, 9, 10};
	
	Array arr;//defaulr constructor
	arr.Print();
	/*Array arr2 = 5;
	arr2.Print();*/

	Array arr3({ 10,11,12,13,14});
	arr3.Print();
	arr3.Fill({ 1,2,3 });
	arr3.Print();
	
	
	delete[]dynam_arr;
}
