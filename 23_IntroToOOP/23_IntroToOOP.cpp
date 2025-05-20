#include <iostream>
#include <string>
using namespace std;
/*
struct Date
{
	int day;
	int month;
	int year;
	string month_name;
};

struct Player
{
	string name;
	short age;
	int games;
	int goals;
};


void InitPlayer(Player& player)
{	
	cout << "Enter name : ";
	cin >> player.name;
	cout << "Enter age : ";
	cin >> player.age;
	player.games = 0;
	player.goals = 0;
}


void PrintPlayer(Player player)
{
	cout << "Name : " << player.name << endl;
	cout << "AGe : " << player.age << endl;
	cout << "Games : " << player.games << endl;
	cout << "Goals : " << player.goals << endl;
}
void AddGameToPlayer(Player& player, int goals = 0)
{
	player.games++;
	player.goals += goals;
}
*/
///-------------OOP -----------------
//struct - public 
// class - private
class Player
{
public:
	string name;
	short age;
	int games;
	int goals;

	void InitPlayer()
	{
		cout << "Enter name : ";
		cin >> name;
		cout << "Enter age : ";
		cin >> age;
		games = 0;
		goals = 0;
	}
	void PrintPlayer()
	{
		cout << "Name : " << name << endl;
		cout << "AGe : " << age << endl;
		cout << "Games : " << games << endl;
		cout << "Goals : " << goals << endl;
	}
	void AddGameToPlayer(int goals = 0)
	{
		//this - pointer on the object
		games++;
		goals += goals;
	}

};


class Student
{
private:
	//data members. змінні-члени класу.
	string name ;
	string surname;
	int marks[3];
public:
	//member function. функції-члени класу, методи (класу).
	double getAvg()
	{
		double sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum += marks[i];
		}
		return sum / 3;
	}

	void setName(string name)
	{
		this->name = name;
	}
	void setSurName(string surname)
	{
		this->surname = surname;
	}
	void setMark(int mark, int index)
	{
		if (mark < 1 || mark > 12)
		{
			mark = 0;
		}
		marks[index] = mark;
	}
	string getName()
	{
		return name;
	}
	string getSurName()
	{
		return surname;
	}
	int getMark(int index)
	{
		return marks[index];
	}
};

inline void Hello()
{
	cout << "Hello";
}

int main()
{
	cout << "Hello";//Hello();
	char myStr1[] = "ABCD";
	char myStr2[] = "ABCD";
	for (int i = 0; i < 4; i++)
	{
		if (myStr1[i] != myStr2[i]) {
			cout << "Are not equal";
		}
		else
		{
			cout << "Are equal";
		}
	}
	
	char name[255];//   \0
	cin.getline(name, 255);

	string name1;//20  40  80
	cin >> name1;
	getline(cin, name1);
	
	Student st;
	//set      get  
	st.setName("Tom");
	st.setSurName("Tomson");
	st.setMark(12, 0);
	st.setMark(10, 1);
	st.setMark(8, 2);
	cout << st.getName() << " " << st.getSurName() << " " << st.getMark(0) << endl;
	//st.name = "Tom";
	//st.surname = "Tomson";
	//st.marks[0] = 12;
	//st.marks[1] = 8;
	//st.marks[2] = 10;
	//cout << st.name << " " << st.surname << " " << st.marks[0] << endl;

	cout << st.getAvg() << endl;
	Student st1;
	
	


	//Player  player;

	//player.InitPlayer();
	//player.PrintPlayer();
	//player.AddGameToPlayer();
	//player.AddGameToPlayer(5);
	//player.PrintPlayer();


	//int a = 5;//variable 
	////int day[4] = { 11,12,2005, "December"};
	//Date date = { 11,12,2005, "December" };// object 
	//cout << date.day << " " << date.month << " " << date.year << " " << date.month_name << endl;

	//Player player;
	//PrintPlayer(player);
	//InitPlayer(player);
	//PrintPlayer(player);
	//AddGameToPlayer(player);//games = 1  golas = 0
	//PrintPlayer(player);
	//AddGameToPlayer(player,2);
	//PrintPlayer(player);
	//AddGameToPlayer(player, 3);
	//PrintPlayer(player);



   
}

void Hello() {

}