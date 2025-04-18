#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:

#pragma region Constructors
    Point()
    {
        x = y = 0;//<------------------
    }
    explicit Point( int value)
    {
        x = y = value;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Point(const Point & other)
    {
        this->x = other.x;
        this->y = other.y;
    }
#pragma endregion
    void Print()const
    {
        cout << "X : " << x << " . Y : " << y << endl;
    }
#pragma region Мої функції для додавання, множення і віднімання
    Point Plus(const Point &other)
    {
        Point res(this->x + other.x, this->y + other.y);
        return res;
    }
    Point Minus(const Point& other)
    {
        Point res(this->x - other.x, this->y- other.y);
        return res;
    }
    Point Multy(const Point& other)
    {
        Point res(this->x * other.x, this->y * other.y);
        return res;
    }
#pragma endregion
#pragma region Binary operators
    //void operator[type] (arguments)
    Point operator +(const Point& other)const 
    {
        Point res(this->x + other.x, this->y + other.y);
        return res;
    }
    Point operator -(const Point& other)const
    {
        Point res(this->x - other.x, this->y - other.y);
        return res;
    }
    Point operator *(const Point& other)const
    {
        Point res(this->x * other.x, this->y * other.y);
        return res;
    }
    Point operator /(const Point& other)const
    {
        Point res(this->x / other.x, this->y / other.y);
        return res;
    }
    //+= 
    Point operator += (const Point& other)
    {
        this->x += other.x;
        this->y += other.y;
        return *this;
    }
    // a = 1, b = 9;
    //a = b
    Point operator =(const Point& other)
    {
        this->x = other.x;
        this->y = other.y;
        return *this;
    }
#pragma endregion

#pragma region Uno operators
    // + - ++ --
    Point operator -()const
    {
       /* Point res(this->x * -1, this->y * -1);
        return res;*/
        return Point(-x, -y);
    }
#pragma endregion

#pragma region Логічні оператори 
    bool operator >(const Point& other)
    {
        //1
       /* if ((this->x + this->y) > (other.x + other.y))
        {
            return true;
        }
        else
        {
            return false;
        }*/
        //2
      /*  bool res;
        res =  (this->x + this->y) > (other.x + other.y) ? true : false;
        return res;*/

        //3
        return  (this->x + this->y) > (other.x + other.y);
    }
    bool operator <(const Point& other)
    {
        return  (this->x + this->y) < (other.x + other.y);
        //return  !(*this > other);
    }
    bool operator >=(const Point& other)
    {
        return  (this->x + this->y) >= (other.x + other.y);
    }
    bool operator <=(const Point& other)
    {
        return  (this->x + this->y) <= (other.x + other.y);
    }
    bool operator ==(const Point& other)
    {
        return  (this->x == other.x) && (this->y == other.y);
    }
    bool operator !=(const Point& other)
    {
        return  (this->x != other.x) || (this->y != other.y);
        //return !(*this == other);
    }


#pragma endregion

};


int main()
{

    int a = 5, b = 7;
    cout << "Summa = " << a + b << endl;
    cout << "Sub = " << a - b << endl;
    cout << "Multy = " << a * b << endl;
  
    Point p1(5, 7);
    Point p2(3, 4);
    Point p3(0, 0);
    Point res;
    cout << "Point 1 : "; p1.Print();
    cout << "Point 2 : "; p2.Print();
    // operator [+] (Point + Point)
    res = p1 + p2; //res = p1.operator+(p2); //res = p1.Plus(p2);  //p1 + p2;
    res.Print();
    // operator [-] (Point - Point)
    res = p1 - p2;//res = p1.operator-(p2); //res = p1.Minus(p2); //p1 - p2;
    res.Print();

    // operator [*] (Point * Point)
    res = p1 * p2;//res = p1.operator*(p2); //res = p1.Multy(p2); //p1 * p2;
    res.Print();

    // operator [/] (Point / Point)
    res = p1 / p2;//res = p1.operator/(p2); //res = p1.Multy(p2); //p1 * p2;
    res.Print();

    cout << "Point 1 : "; p1.Print();
    p1 += p2;
    p1.Print();
   
    res = -p1;// res = p1.operator-();
    res.Print();

    cout << "Operator = " << endl;
    cout << "Point 1 : "; p1.Print();
    cout << "Point 2 : "; p2.Print();
    cout << "Point 3 : "; p3.Print();
    //p1 = p2 = p3;
    cout << "Point 1 : "; p1.Print();
    cout << "Point 2 : "; p2.Print();
    cout << "Point 3 : "; p3.Print();

    if (p1 > p2)
    {
        cout << "Point p1 is bigger" << endl;
    }
    else
    {
        cout << "Point p2 is bigger" << endl;
    }
    if (p1 == p2)
    {
        cout << "Point p1 == p2" << endl;
    }
    else
    {
        cout << "Point p1 != p2" << endl;
    }








}
