#include <iostream>
#include <windows.h> // WinApi header 
using namespace std;

class Car
{
    //private public protected
private:
    string mark;
    float volume;
protected:
    int year;
    int mileage;
    int speed;
public:
    Car() :mark("no mark"), volume(0), year(0), mileage(0), speed(0) {}
    Car(string m, float v, int y, int ml) :
        mark(m), volume(v), year(y), mileage(ml), speed(0) {}
    void Print()const
    {
        cout << "----------------- Car -------------------" << endl;
        cout << "Mark : " << mark << endl;
        cout << "Volume : " << volume << endl;
        cout << "Year : " << year << endl;
        cout << "Mileage : " << mileage << endl;
    }
    void Drive()const
    {
        cout << "I am a Car !!!! I can drive with speed " << speed << " km/h" << endl;
    }
    void setSpeed(int speed)
    {
        if (speed > 0)
            this->speed = speed;
    }   
};
//private public protected
class PoliceCar : public Car
{
    float soundVolume;
public:
    PoliceCar() :soundVolume(0), Car() {}
    PoliceCar(string m, float v, int y, int ml, float s) :soundVolume(s), 
        Car(m,v,y,ml) {}
    void Print()const
    {
        cout << "----------------- Police Car -------------------" << endl;
        Car::Print();
    }
    void Drive()const
    {
        cout << "I am a Police Car !!!! I can drive with speed " << speed << " km/h" << endl;
    }
    void BeepBeep()
    {
        /*cout << "Viyviyviyviyviy" << endl;
        Beep(1000, 500);
        Beep(523, 500);
        Beep(1000, 500);
        Beep(523, 500);*/
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(500);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(900);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(523, 100); Sleep(300);
        Beep(523, 100); Sleep(100);
        Beep(523, 100); Sleep(1100);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(311, 300); Sleep(300);
        Beep(296, 300); Sleep(300);
        Beep(262, 300); Sleep(1300);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(330, 100); Sleep(700);
        Beep(440, 100); Sleep(300);
        Beep(392, 100); Sleep(500);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        /*Intro*/
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(196, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(330, 100); Sleep(125);
        Beep(392, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(660, 100); Sleep(125);
        Beep(784, 100); Sleep(575);
        Beep(660, 100); Sleep(575);
        Beep(207, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(311, 100); Sleep(125);
        Beep(415, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(622, 100); Sleep(125);
        Beep(830, 100); Sleep(575);
        Beep(622, 100); Sleep(575);
        Beep(233, 100); Sleep(125);
        Beep(294, 100); Sleep(125);
        Beep(349, 100); Sleep(125);
        Beep(466, 100); Sleep(125);
        Beep(587, 100); Sleep(125);
        Beep(698, 100); Sleep(125);
        Beep(932, 100); Sleep(575);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(1046, 675);
    }
};
void TestDrive(Car simpleCar)
{
    simpleCar.setSpeed(70);
    simpleCar.Drive();
}

int main()
{
    Car car("Nissan",1.9,2015,30);
    car.setSpeed(200);
    car.Drive();
    
    PoliceCar p("Toyota",1.8,2020,70,90);
    p.setSpeed(150);
    p.Drive();
   // p.BeepBeep();
    TestDrive(car);
    TestDrive(p);














}

