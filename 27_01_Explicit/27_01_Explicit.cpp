#include <iostream>
using namespace std;

void doSomething(long number)
{
}
float doSomething()
{
    return 10.0; 
}
class Array
{
    int size;
    int* arr;
public:
    Array()
    {
        this->size = 0;
        this->arr = nullptr;
    }
    explicit Array(int size)
    {
        this->size = size;
        this->arr = new int[size];
    }
    ~Array()
    {
        if (arr != nullptr)
            delete[]arr;
    }
    int getSize()const
    {
        return size;
    }
    int getValue(int index)const
    {
        return arr[index];
    }
    void setValue(int value, int index)const
    {
        arr[index] = value;
    }
    void dispay(int index)const
    {
        cout << arr[index] << " ";
    }
};

void Display(const Array &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        arr.dispay(i);
    }
    cout << endl;
}
int main()
{
    //explicit - явно
    int r = (int)2.33;
    //imlpicit - неявно   
    int a = 3.33;//double --> int 


    double b(10);//int --> double
    doSomething(5);//int --> long
    float c = 1.25;
    int size = 5;
    Array array(size);//parametrized constructor
    Display(array);
    for (int i = 0; i < array.getSize(); i++)
    {
        array.setValue(size - i, i);
    }
    Display(array);
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    //Display(10);//error
    Display(Array(10));

    //Array arr2 = 5;
    //Display(arr2);



}

