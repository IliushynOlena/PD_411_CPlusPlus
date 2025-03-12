#include <iostream>
using namespace std;
#define B 0

inline void Hello()
{
	cout << "Hello world" << endl;
}
//перезавантаження функцій по типу даних
int max_element(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
long max_element(long arr[], int size)
{
	long max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
float max_element(float arr[], int size)
{
	float max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
double max_element(double arr[], int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
//перезавантаження функцій по кількості аргументів
double multy(double x)
{
	return x * x * x;
}
double multy(double x, double y)
{
	return x * x * y;
}
double multy(double x, double y, double z)
{
	return x * y * z;
}
//double multy(double x = 1, double y = 1, double z = 1, double p = 1)
//{
//	return x * y * z *p;
//}


//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//float Max(float a, float b)
//{
//	return a > b ? a : b;
//}
//char Max(char a, char b)
//{
//	return a > b ? a : b;
//}
template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

template <typename T1, typename T2 >
T2 Max(T1 a, T2 b)
{
	return a > b ? a : b;
}
int main()
{
	//Шаблони функцій
	/*int a = 7, b = 24;
	cout << "Max element = " << Max(a, b) << endl;
	float x = 3.33, y = 5.25;
	cout << "Max element = " << Max(x, y) << endl;
	char s1 = 'f', s2 = 'w';
	cout << "Max element = " << Max(s1,s2 ) << endl;
	float q = 3.12, r = 1.14;
	cout << "Max element = " << Max(q,r ) << endl;
	cout << "Max element = " << Max(5,3.17 ) << endl;*/
	
   //Ключове слово inline
	const int a = 5;
	cout << "Hello world" << endl;//Hello()
	cout << a << endl;
	cout << 0 << endl;

	//Перевантаження функцій
	int x[] = { 10,20,30,40,50,60 };
	cout << "Max int = " << max_element(x, 6) << endl;
	long l_arr[] = { 12L,13L,14L,15L,16L,17L };
	cout << "Max long = " << max_element(l_arr, 6) << endl;
	float f_arr[] = { 0.1f,0.2f,0.3f,0.4f,0.5f,0.6f };
	cout << "Max float = " << max_element(f_arr, 6) << endl;
	double d_arr[] = { 0.01,0.02,0.03,0.04,0.05,0.06 };
	cout << "Max double = " << max_element(d_arr, 6) << endl;

	cout << "Res = " << multy(5) << endl;
	cout << "Res = " << multy(5, 4) << endl;
	cout << "Res = " << multy(5, 9, 7) << endl;
	//cout << "Res = " << multy(5, 8, 3, 4) << endl;
	









}

