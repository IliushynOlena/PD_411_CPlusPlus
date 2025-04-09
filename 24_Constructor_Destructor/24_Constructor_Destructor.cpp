#include <iostream>
using namespace std;

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
	PIB fullname;
	Birthday birthday;
	string phone;
	string city;
	string country;
	string university_name;
	string university_city;
	string university_country;
	string group;
	int* marks ;//pointer - empty
	int markCount;// 0 
	float average;
public:
	//ctor + Tab
	Student()
	{
		cout << "Default constructor " << endl;
		fullname.name = "no name";
		fullname.surname = "no surname";
		fullname.lastname = "no lastname";
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
		fullname.name = name;
		fullname.surname = surname;
		fullname.lastname = lastname;
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
		fullname.name = name;
	}
	void SetSurName(string surname)
	{
		fullname.surname = surname;
	}
	void SetLastName(string lastname)
	{
		fullname.lastname = lastname;
	}
	/*void Initialize()
	{
		fullname.name = "no name";
		fullname.surname = "no surname";
		fullname.lastname = "no lastname";
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
	}*/
	void Print()
	{
		cout << fullname.name << endl;
		cout<< fullname.surname << endl;
		cout<< fullname.lastname << endl;
		cout<< birthday.day << endl;
		cout<< birthday.month << endl;
		cout<< birthday.year << endl;
		cout<< phone << endl;
		cout<< city << endl;
		cout<< country << endl;
		cout<< university_name << endl;
		cout<< university_city << endl;
		cout<< university_country << endl;
		cout<< group << endl;
		cout<< "marks : " ;
		for (int i = 0; i < markCount; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl;
		cout<< markCount << endl;
		cout<< average << endl;
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
	void Delete()
	{
		if (marks != nullptr)
			delete[] marks;
	}
	// ~ + Tab (tulda)
	~Student()
	{
		cout << "Destructor " << fullname.name << endl;
		//Delete();
		if (marks != nullptr)
			delete[] marks;
	}
};

int main()
{
	Student student;//default constructor
	student.Print();
	//student.Initialize();
	student.Print();
	student.AddMark(12);
	student.AddMark(8);
	student.AddMark(2);
	student.AddMark(3);
	student.SetName("Nick");
	student.SetSurName("Nick");
	student.SetLastName("Nick");
	student.Print();
	student.Delete();




	Student st2("Tom", "Tomson", "Lastname");
	st2.Print();





}
