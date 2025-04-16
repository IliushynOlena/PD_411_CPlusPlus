#include <iostream>
using namespace std;
class Date
{
	int day;
	int month;
	int year;
	const int baseYear;
public:
	/*Date():baseYear(2025)
	{
		day = 0;
		month = 0;
		year = 0;
	}*/
	Date() :day(0), month(0), year(0), baseYear(0) {}
	Date(int day, int month, int year, int base) :day(day),
		month(month), year(year), baseYear(base) {}
	/*{
		baseYear = 2000;
		this->day = day;
		this->month = month;
		this->year = year;
	}*/
	void SetDay(int day)
	{
		this->day = day;
	}
	/*int getDay()
	{
		return day;
	}*/
	int getDay()const
	{
		return this->day;
	}
	void Print() const
	{
		cout << day << "/" << month << "/" << year << endl;
		cout << "Base Year : " << baseYear << endl;
	}

};
class Account
{
private:
	double sum;
	const double rate;
public:
	Account(double Rate, double Sum):rate(Rate)
	{
		//this->rate = Rate;
		sum = Sum;
	}
	double getRate() const
	{
		return rate;
	}
	double getIncome()
	{
		return sum * rate / 100;
	}
	double getIncome() const
	{
		return sum * rate / 100;
	}
	double getSum()
	{
		return sum;
	}
	double getSum()const
	{
		return sum;
	}
	double setSum()//const
	{
		sum += getIncome();
		return sum;
	}
};

int main()
{
	Account account1(5, 2000);
	const Account account2(8, 5000);
	cout << account1.getRate() << endl;
	cout<< account2.getRate() << endl;

	cout<< account1.getSum() << endl;
	cout<< account2.getSum() << endl;

	cout<< account1.getIncome() << endl;
	cout<< account2.getIncome() << endl;

	cout<< account1.setSum() << endl;
	//cout<< account2.setSum() << endl;//error

	/*
	const int size = 3;//variable
	const string s{ "some string" };
	const char* day = { "Some day" };
	const int days[3] = { 31,31,28 };
	//days[2] = 29;
	int value;
	cout << "Enter value : "; cin >> value;
	Date eventDay{ 20,4,2025,value };
	eventDay.Print();
	eventDay.SetDay(21);
	eventDay.Print();

	const Date independencyDay{ 24,8,2025 ,1991};
	//independencyDay.SetDay(4);
	independencyDay.Print();
	 cout<< independencyDay.getDay() << endl;
	//independencyDay.month = 7;
	//independencyDay.Print();
	*/



}
