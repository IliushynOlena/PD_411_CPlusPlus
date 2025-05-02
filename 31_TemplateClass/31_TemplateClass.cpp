#include <iostream>
#include <vector>
using namespace std;

//int getMax(int* arr, int size)
//{
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}
//long getMax(long* arr, int size)
//{
//	long max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}

template<typename T_arr>
T_arr getMax(T_arr* arr, int size)
{
	T_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}


template<typename T_coll, typename T_value>
class MyClass
{
	T_coll* collection;
	int size;
	T_value point;
public:
	MyClass()
	{
		collection = nullptr;
		size = 0;
		//point = 0;
	}
	MyClass(T_coll* coll, T_value value):collection(coll),point(value){}
	~MyClass()
	{
		if (collection != nullptr)
			delete[]collection;
	}
	void SetCollection(T_coll* coll);
	
	void SetValue(T_value v);
	void Print()
	{
		cout << "Collection : " << collection << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << collection[i] << " ";
		}
		cout << "\nValue : " << point << endl;
	}
};

template<typename T_coll, typename T_value>
void MyClass<T_coll, T_value>::SetCollection(T_coll* coll)
{
	collection = coll;
}

template<typename T_coll, typename T_value>
inline void MyClass<T_coll, T_value>::SetValue(T_value v)
{
	point = v;
}
template<typename T_coord>
class Point
{
	T_coord x;
	T_coord y;
public:

#pragma region Constructors
	Point()
	{
		x = y = 0;//<------------------
	}
	explicit Point(T_coord value)
	{
		x = y = value;
	}
	Point(T_coord x, T_coord y)
	{
		this->x = x;
		this->y = y;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	void setCoords(T_coord newX, T_coord newY)
	{
		this->x = newX;
		this->y = newY;
	}
#pragma endregion
	void Print()const
	{
		cout << "X : " << x << " . Y : " << y << endl;
	}
};

template<typename T_X, typename T_Y>
class New_Point
{
	T_X x;
	T_Y y;
public:

#pragma region Constructors
	New_Point()
	{
		x = y = 0;//<------------------
	}
	New_Point(T_X x, T_Y y)
	{
		this->x = x;
		this->y = y;
	}
	New_Point(const New_Point& other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	void setCoords(T_X newX, T_Y newY)
	{
		this->x = newX;
		this->y = newY;
	}
#pragma endregion
	void Print()const
	{
		cout << "X : " << x << " . Y : " << y << endl;
	}
};
int main()
{
	Point<int> point1(4, 6);
	Point<float> point2(4.45, 6.2);
	point1.Print();
	point2.Print();

	point2.setCoords(15.335, 4.14);
	point2.Print();

	New_Point<int, float> p1(15,3.33);
	p1.Print();

	vector<int> v1;
	vector<float> v2;
	
	//const int size = 10;
	//double numbers[size] = { 5,8,7,9,6,3,1,45,2,47 };
	//cout << "Max = " << getMax(numbers, size) << endl;
	////string colors[5] = { "red", "blue", "yellow","black", "white" };
	////string colors[5] = { "Andriy", "Oleg", "Vova","Oleksandr", "Zina" };
	//string colors[5] = { "A", "AA", "AAA","AAAAA" };
	//cout << "Max = " << getMax(colors, 4) << endl;

	long* long_arr = new long[4];
	char* char_arr = new char[4];
	for (int i = 0; i < 4; i++)
	{
		long_arr[i] = i + 1;
		cout << long_arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		char_arr[i] = i + 'a';
		cout << char_arr[i] << " ";
	}

	MyClass<long,string> cl1(long_arr, "Class with long collection");
	MyClass<char,string> cl2(char_arr, "Class with char collection");
	cl1.Print();
	cl2.Print();





	/*delete[]long_arr;
	delete[]char_arr;*/
}

