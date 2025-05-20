#include <iostream>
using namespace std;

class Person//abstract class
{
	string name;
public:
	Person() :name("no name"){}
	Person(string n) :name(n) {}
	virtual void Print()const
	{
		cout << "Student : " << name << endl;
	}
	virtual ~Person() = 0 {};


};
class Aspirant : public Person
{
	string* subjects;
	int countSub;
public:
	Aspirant() :subjects(nullptr), countSub(0), Person() {}
	Aspirant(string n ,initializer_list<string> list) :
		Person(n) {
		this->countSub = list.size();
		subjects = new string[countSub];
		int i = 0;
		for (string sub : list)
		{
			subjects[i] = sub;
			i++;
		}
	}
	void Print()const override
	{
		Person::Print();
		cout << "Subject : ";
		for (int i = 0; i < countSub; i++)
		{
			cout << subjects[i] << "  ";
		}
		cout << endl;
	}
	~Aspirant()
	{
		if (subjects != nullptr)
			delete[]subjects;
	}

};

int main()
{
	srand(time(0));
	//Person student("Vova");
	//student.Print();

	Aspirant asp("Kolya", { "Recuperation","water treatment", });
	asp.Print();

	Person* group[2]
	{
		//new Person("Vova"),
		new Aspirant("Kolya", {"Recuperation","water treatment",}),
		new Aspirant("Olga",{"Main page","UA/UX"})
	};
	for (int i = 0; i < 2; i++)
	{
		group[i]->Print();
		delete group[i];
	}


}

