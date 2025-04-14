#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
};


class Student
{
private:
	string name;
	int age;
	int* marks;//pointer - empty
	int markCount;// 0 
	float average;
public:
	//ctor + Tab
	Student()
	{
		cout << "Default constructor " << endl;
		name = "no name";
		age = 0;
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	Student(string name, int age)
	{		
		cout << "Parametrized constructor " << endl;
		this->name = name;
		this->age = age;
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	Student(const Student& other)
	{
		this->name = other.name;//Nick --> Nick
		this->age = other.age;  //15 --> 15
		//this->marks = other.marks;//0x123 ---> 0x123 
		this->markCount = other.markCount;//4 --> 4
		this->marks = new int[other.markCount];
		for (int i = 0; i < other.markCount; i++)
		{
			this->marks[i] = other.marks[i];
		}
		this->average = other.average;// 9.25 ---> 9.25
	}
	void Print()
	{
		cout << "Name : "<<  name << endl;
		cout << "Age : "<<  age << endl;
		cout << "marks : ";
		for (int i = 0; i < markCount; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl;
		cout << markCount << endl;
		cout << average << endl;
	}
	void AddMark(int mark)
	{
		//marks = nullptr;
		//markCount = 0
		markCount++;
		int* temp = new int[markCount];
		for (int i = 0; i < markCount - 1; i++)
		{
			temp[i] = marks[i];
		}
		temp[markCount - 1] = mark;
		if (marks != nullptr)
			delete[] marks;
		marks = temp;
		setAverageMark();
	}
	void setAverageMark()
	{
		float sum = 0;
		for (int i = 0; i < markCount; i++)
		{
			sum += marks[i];
		}
		average = (float)sum / markCount;
	}
	// ~ + Tab (tulda)
	~Student()
	{
		cout << "Destructor " << name << endl;
		if (marks != nullptr)
			delete[] marks;
	}
};
class Animal
{
	//default constructor
	//destructor 
	//copy constructor
};
struct Vagon
{
	//public
	int number;
	int places;
	int passangers;
	//constrcutor
	//Show();
};
class Train
{
	//private
	Vagon* vagons;
	int countVagon;

};

int main()
{
	Vagon v;
	Train t;
	Student student("Nick", 15);//parametrized constructor
	student.AddMark(12);
	student.AddMark(7);
	student.AddMark(8);
	student.AddMark(10);
	student.Print();
	cout << "Copy student " << endl;

	{
		Student student1(student);//copy costructor
		student1.Print();
	}
	student.Print();
	
	/*
	int a;
	int b = 3.33;// ініціалізація з копіюванням  --> 3.33 - літерал
	//int c { 5.12 };//уніфікована ініціалізація
	int value(15);//пряма ініціалізація
	//cout << a << endl;
	cout << b << endl;
	cout << 12 << endl;
	int numbers[2];//array --> size = 2
	cout << numbers[0] << endl;
	numbers[0] += 2;
	cout << numbers[0] << endl;
	int size{ 33 };
	cout << size << endl;
	const double PI{ 3.14 };
	cout << PI << endl;
	int marks[4]{ 11,10,7,8 };
	int* ptr{ nullptr };
	Point point{ 10,5 };
	cout << point.x << "  " << point.y << endl;
	*/


}

