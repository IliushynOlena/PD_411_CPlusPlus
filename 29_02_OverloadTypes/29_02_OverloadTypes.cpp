#include <iostream>
using namespace std;
class Square;
class RectangleNew
{
private:
    int height;
    int width;
public:
    RectangleNew() :height(0), width(0) {}
    explicit RectangleNew(int value) :height(value), width(value) {}
    RectangleNew(int height, int width) :height(height), width(width) {}
    void Print()const
    {
        cout << "Height :" << height << " ";
        cout << "Width :" << width << endl;
    }
    //overloat data types
    //operator typename(){} -- 1
    //operator typename()const {} -- 2
    //explicit operator typename()const {} -- 3
    explicit operator int()
    {
        return height * width;
    }
    operator Square();
};


class Square
{
    int side;
public:
    Square() :side(0) {}
    Square(int s) :side(s) {}
    void Print()const
    {
        cout << "Side :" << side << " ";
        cout << "Side :" << side << endl;
    }
    operator RectangleNew()
    {
        return RectangleNew(side, side + 10);
    }
};

RectangleNew::operator Square()
{
    return Square(height * width);
}




int main()
{

    int value = 9;//int ---> int
    double valDouble = value;// int --> double з стандартного до стандартного

    Square sq(10);
    RectangleNew rectangle(5, 7);// standart to abstract 
    //rectangle = 1000;// standart to abstract 
   
    // implicit  
    //value = rectangle;//abstract to  standart 
    //explicit
    value = (int)rectangle;//abstract to  standart 
    cout << "Square rectangle = " << value << endl;

    rectangle = (RectangleNew)sq;//abstract to  abstract 
    rectangle.Print();

    sq = rectangle;
    sq.Print();
}

