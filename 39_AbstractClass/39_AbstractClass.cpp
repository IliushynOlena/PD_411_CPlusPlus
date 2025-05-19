#include <iostream>
using namespace std;

class Animal//abstract class 
{
	string name;
	string type;
	int age;
	float weight;
public:
	Animal():name("none"),type("none"),age(0),weight(0){}
	Animal(string n, string t, int a, float w):name(n),type(t),age(a),weight(w){}

	void Show()const
	{
		cout << "Name : " << name << endl;
		cout << "Type : " << type << endl;
		cout << "Age : " << age << endl;
		cout << "Weight : " << weight << endl;
	}
	//virtual function
	virtual void Move()const
	{
		cout << "I am moving............" << endl;
	}
	//pure virtual function = 0;
	virtual void Say() const = 0;	
};
class Lion : public Animal
{
	float runSpeed;
public:
	Lion():runSpeed(0),Animal(){}
	Lion(string n, string t, int a, float w, float r):runSpeed(r),Animal(n,t,a,w){}
	void Say()const override
	{
		cout << "Rrrrr-rrrrrr-rrrrrrr-rrrrrr-rrrrrr" << endl;
	}
	void Move()const override
	{
		cout << "I am running with speed : " << runSpeed << "km/h" << endl;
	}
};
class Antilopa: public Animal
{
	float runSpeed;
	bool horns;
public:
	Antilopa():runSpeed(0),horns(0){}
	Antilopa(string n, string t, int a, float w,float r, bool h):runSpeed(r),horns(h),
		Animal(n,t,a,w){}

	void Say()const override
	{
		cout << "Myaaaaaaaaaaaaa" << endl;
	}
	void Move()const override
	{
		cout << "I am running with speed : " << runSpeed << "km/h" << endl;
	}
};
class Reptile : public Animal//abstract class
{
	float depth;
public:
	Reptile():depth(0),Animal(){}
	Reptile(string n, string t, int a, float w, float d):depth(d),
		Animal(n,t,a,w){}
	
	void Move()const override
	{
		cout << "I am crawling  and  swimming up to the " << depth  << "m " << endl;
	}
};
//class Dolphin: public Animal
//{
//	float depth;
//public:
//	Dolphin()
//	{
//
//	}
//
//};

class Frog : public Reptile
{
public:
	Frog(string n, string t, int a, float w, float d) :
		Reptile(n, t, a, w,d) {}
	void Say()const override
	{
		cout << "Kva-kva-kva-kva-kva" << endl;
	}
};

void RollCall(Animal& animal)
{
	animal.Move();
	animal.Say();
	animal.Show();
}
int main()
{
	Frog f("Grisha","Reptile",10,0.333,5);
	f.Say();
	f.Move();
	//Animal a;
	//a.Show();
	//a.Move();
	//a.Say();
   
	Lion l("Simba","predator",42,150,75);//default constructor
	//l.Show();
	l.Say();
	l.Move();

	Antilopa ant("Gnu","herbivorous",28,200,100,1);
	ant.Say();
	ant.Move();
	cout << "----------------------------------------" << endl;
	Animal* zoo[3]
	{
		&f,&l,&ant

	};//new Animal();

	RollCall(f);
	RollCall(l);
	RollCall(ant);


}

