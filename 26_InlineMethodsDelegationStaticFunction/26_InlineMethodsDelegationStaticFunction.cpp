
#include <iostream>
using namespace std;

inline void Hello()
{
    cout << "Hello" << endl;
}


struct PIB {
	string name;
	string surname;
	string lastname;
};
struct Birthday {
	int day;
	int month;
	int year;
};
class Student
{
private:
	PIB name;
	Birthday birthday;
	string phone;
	string city;
	string country;
	string university_name;
	string university_city;
	string university_country;
	string group;
	int* marks;//pointer - empty
	int markCount;// 0 
	float average;
public:
	//ctor + Tab
	Student()
	{
		cout << "Default constructor " << endl;
		name.name = "no name";
		name.surname = "no surname";
		name.lastname = "no lastname";
		birthday.day = 0;
		birthday.month = 0;
		birthday.year = 0;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university_name = "no university_name";
		university_city = "no university_city";
		university_country = "no university_country";
		group = "no group";
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	Student(string name, string surname, string lastname)
	{
		cout << "Parametrized constructor " << endl;
		this->name.name = name;
		this->name.surname = surname;
		this->name.lastname = lastname;
		birthday.day = 0;
		birthday.month = 0;
		birthday.year = 0;
		phone = "no phone";
		city = "no city";
		country = "no country";
		university_name = "no university_name";
		university_city = "no university_city";
		university_country = "no university_country";
		group = "no group";
		marks = nullptr;
		markCount = 0;
		average = 0;

	}
	void SetName(string name)
	{
		this->name.name = name;
	}
	void SetSurName(string surname)
	{
		name.surname = surname;
	}
	void SetLastName(string lastname)
	{
		name.lastname = lastname;
	}
	
	void Print();
	void AddMark(int mark);
	void setAverageMark()
	{
		float sum = 0;
		for (int i = 0; i < markCount; i++)
		{
			sum += marks[i];
		}
		average = (float)sum / markCount;
	}
	void Delete()
	{
		if (marks != nullptr)
			delete[] marks;
	}
	// ~ + Tab (tulda)
	~Student()
	{
		cout << "Destructor " << name.name << endl;
		//Delete();
		if (marks != nullptr)
			delete[] marks;
	}
};

class Human
{

	string name;
	int age = 0;
	int weight;
	static int count_human;
public:
	//список ініціалізаторів 
	//Human() :name("no name"), age(0), weight(0) {}
	//Human() :name{ "no name" }, age{ 0 }, weight{ 0 } {}
	
	Human()
	{
	
		name = "no name";
		age = 0;
		weight = 0;
		count_human++;
	}
	Human(string name):Human()
	{
		this->name = name;
	/*	age = 0;
		weight = 0;*/
	}
	Human(string name, int age):Human(name)
	{
		//this->name = name;
		this->age = age;
		//weight = 0;
	}
	Human(string name, int age, int weight):Human(name,age)
	{
		//this->name = name;
		//this->age = age;
		this->weight = weight;
		
	}
	/*Human(string name, int weight, int age)//Error
	{
		this->name = name;
		this->age = age;
		this->weight = weight;
	}*/
	//Human(int age , string name)
	//{
	//	this->name = name;
	//	this->age = age;
	//	weight = 0;
	//}
	static int getCountHuman()
	{
	
		return count_human;
	}
	void Print()
	{
		
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Weight : " << weight << endl;
	}
	~Human()
	{

		count_human--;
	}
};

int Human::count_human = 0;
int main()
{
	cout << "Count human = "<< Human::getCountHuman() << endl;

	Human h1;//default 
	cout << "Count human = " << h1.getCountHuman() << endl;
	h1.Print();

	Human h2("Petro");
	cout << "Count human = " << h2.getCountHuman() << endl;
	h2.Print();

	Human h3("Ivan", 12);
	h3.Print();

	if (true)
	{
		Human h4("Olga", 18, 50);
		h4.Print();
	}
	/*Human::count_human = 0;
	h1.count_human = 0;*/

	cout << "Count human = " << Human::getCountHuman() << endl;
	cout << "Count human = " << h1.getCountHuman() << endl;
	cout << "Count human = " << h2.getCountHuman() << endl;
	cout << "Count human = " << h3.getCountHuman() << endl;
	//cout << "Count human = " << h4.count_human << endl;

    //cout << "Hello" << endl;//Hello();
    //cout << Hello << endl;
}

void Student::Print()
{
	cout << name.name << endl;
	cout << name.surname << endl;
	cout << name.lastname << endl;
	cout << birthday.day << endl;
	cout << birthday.month << endl;
	cout << birthday.year << endl;
	cout << phone << endl;
	cout << city << endl;
	cout << country << endl;
	cout << university_name << endl;
	cout << university_city << endl;
	cout << university_country << endl;
	cout << group << endl;
	cout << "marks : ";
	for (int i = 0; i < markCount; i++)
	{
		cout << marks[i] << " ";
	}
	cout << endl;
	cout << markCount << endl;
	cout << average << endl;
}
void Student::AddMark(int mark)
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
