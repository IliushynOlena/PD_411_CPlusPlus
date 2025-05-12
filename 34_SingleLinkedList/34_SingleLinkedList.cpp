#include <iostream>
using namespace std;
template<typename T>
class List
{

    struct Node
    {
        T value;
        Node* next;
        //c-tors....show()
        Node(int value, Node* next) :value(value), next(next) {}
    };

private:
    Node* head;
public:
    List()
    {
        head = nullptr;
    }
    void AddToHead(T value)
    {
       /* Node* newNode = new Node;
        newNode->value = value;
        newNode->next = head;*/
        Node* newNode = new Node(value,head);      
        head = newNode;
    }
    void Print()const
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
    ~List()
    {
        Node* current = nullptr;
        while (head != nullptr)
        {
            current = head;
            head = head->next;
            delete current;
        }
    }
    void AddToTail(T value)
    {
        Node* newNode = new Node(value, nullptr);
        if (head == nullptr)
        {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }      
    }
    int GetElement(int pos)
    {
        Node* current = head;
        int i = 1;
        while (current != nullptr)
        {
            if (pos == i) return current->value;
            current = current->next;
            i++;
        }
    }
    int operator[](int pos)
    {
        Node* current = head;
        int i = 1;
        while (current != nullptr)
        {
            if (pos == i) return current->value;
            current = current->next;
            i++;
        }
    }
    void DeleteFromTail()
    {
        if (head == nullptr) return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
          
        }
        else {
            Node* current = head;
            while (current->next->next != nullptr)
            {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }

      
    }
};

class Point {};

class Vector
{
    int size;
    //Point * points;
    List<Point> points;
    void AddToHead(Point p)
    {
        //points.AddToHead(p);
    }
    void Add(Point p)
    {/*
        size++;
        Point* twmp = new Point[size];
        for (int i = 0; i < length; i++)
        {

        }*/
    }
};

int main()
{
    List<int> l;
    for (int i = 0; i < 10; i++)
    {
        l.AddToHead(i);
    }
    l.Print(); 
    l.AddToTail(100);
   /* l.AddToTail(200);
    l.AddToTail(300);
    l.Print();
    cout << "Element pos = 3 : " << l.GetElement(3) << endl;
    cout << "Element pos = 3 : " << l[3] << endl;
    for (size_t i = 0; i < 5; i++)
    {
        l.DeleteFromTail();
        l.Print();
    }*/
    l.DeleteFromTail();
    l.Print();
   
    List<string> colors;
    colors.AddToHead("red");



}

