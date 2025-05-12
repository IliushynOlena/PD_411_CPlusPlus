#include <iostream>
using namespace std;
template<typename T>
class List
{
    struct Node
    {
        Node* prev;
        T value;
        Node* next;
        //c-tors....show()
        Node(Node *prev, T value, Node* next) :prev(prev),value(value), next(next) {}
    };

private:
    Node* head;
    Node* tail;
public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }
    bool IsEmpty()
    {
        return head == nullptr;
    }
    void AddToHead(T value)
    {
        Node* newNode = new Node(nullptr,value, head);

        if (IsEmpty())
        {
            head = tail = newNode;
        }
        head->prev = newNode;
        head = newNode;
    }
    void Print()const
    {
        //Node* current = head;//int i = 0;
        //while (current != nullptr)//i < 10;
        //{
        //    cout << current->value << " ";
        //    current = current->next;//i++;
        //}
        for (Node * i = head; i!= nullptr ; i = i->next)
        {
            cout << i->value << " ";
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
        Node* newNode = new Node(tail, value, nullptr);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
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
        if (IsEmpty()) return;
        if (head->next == nullptr)
        {
            delete head;
            head = tail = nullptr;

        }
        else {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
    }
};

int main()
{
    List<int>l;
    l.AddToHead(100);
    l.AddToHead(200);
    l.AddToHead(300);
    l.Print();
    l.AddToTail(1);
    l.AddToTail(2);
    l.AddToTail(3);
    l.AddToTail(4);
    l.Print();
    l.DeleteFromTail();
    l.DeleteFromTail();
    l.DeleteFromTail();
    l.DeleteFromTail();
    l.Print();




}

