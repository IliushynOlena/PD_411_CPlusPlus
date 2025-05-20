//#include <iostream>
//using namespace std;
//
//class Person
//{
//	string name;
//	string spetialization;
//	int* marks;
//	int countMark;
//public:
//	Person():name("no name"), spetialization("none"), marks(nullptr), countMark(0) {}
//	Person(string n,string s):name(n),spetialization(s)
//	{
//		countMark = rand() % 10 + 1;//1.....10
//		marks = new int[countMark];
//		for (int i = 0; i < countMark; i++)
//		{// rand()%12 --- 0...4
//			marks[i] = rand()%5  + 8;//8-12
//		}	
//	}
//	virtual ~Person()
//	{
//		if (marks != nullptr)
//			delete[] marks;
//	}
//	virtual void Print()const
//	{
//		cout << "Student : " << name << endl;
//		cout << "Spetialization : " << spetialization << endl;
//		for (int i = 0; i < countMark; i++)
//		{
//			cout << marks[i] << " ";
//		}
//		cout << endl;
//	}
//	
//};
//class Aspirant: public Person
//{
//	string *subjects;
//	int countSub;
//public:
//	Aspirant():subjects(nullptr),countSub(0),Person(){}
//	Aspirant(string n, string s, initializer_list<string> list):
//		Person(n,s){
//		this->countSub = list.size();
//		subjects = new string[countSub];
//		int i = 0;
//		for (string sub: list)
//		{
//			subjects[i] = sub;
//			i++;
//		}
//	}
//	void Print()const override
//	{
//		Person::Print();
//		cout << "Subject : ";
//		for (int i = 0; i < countSub; i++)
//		{
//			cout << subjects[i] << "  ";
//		}
//		cout << endl;
//	}
//	~Aspirant()
//	{
//		if (subjects != nullptr)
//			delete[]subjects;
//	}
//	
//};
//
//int main()
//{
//	srand(time(0));
//	Person student("Vova","Programmer");
//	student.Print();
//
//	Aspirant asp("Kolya", "Water engineer", {"Recuperation","water treatment",});
//	asp.Print();
//
//	Person* group[3]
//	{
//		new Person("Vova","Programmer"),
//		new Aspirant("Kolya", "Water engineer", {"Recuperation","water treatment",}),
//		new Aspirant("Olga","Design",{"Main page","UA/UX"})
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		group[i]->Print();
//		delete group[i];
//	}
//
//
//}
//
