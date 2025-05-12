
#include <iostream>
#include <string>
using namespace std;
class List{};
struct Vagon {
    int number;
    int places;
    int passengers;
    Vagon() :number(0), places(0), passengers(0) {}
    Vagon(int n, int p, int pass) :number(n), places(p), passengers(pass) {}
    void Show()const
    {
        cout << "Vagon number: " << number << endl;
        cout << "Vagon places: " << places << endl;
        cout << "Vagon passengers: " << passengers << endl;
    }    
};



class Train {
private:
    string model;
    int vagonCount;
    Vagon* vagons; //List<Vagon> vagons;
public:
    Train()
    {
        model = "Hyundai";
        vagonCount = 0;
        vagons = nullptr;

    }
    Train(string model)
    {
        this->model = model;
        vagonCount = 0;
        vagons = nullptr;
    }
    Train(const Train& other) {
        this->model = other.model;
        this->vagonCount = other.vagonCount;

        if (vagonCount > 0) {
            this->vagons = new Vagon[vagonCount];
            for (int i = 0; i < vagonCount; ++i) {
                this->vagons[i] = other.vagons[i];
            }
        }
        else {
            this->vagons = nullptr;
        }
    }
    void AddVagon(Vagon vagon)
    {
        vagonCount++;
        Vagon* temp = new Vagon[vagonCount];
        for (int i = 0; i < vagonCount - 1; i++)
        {
            temp[i] = vagons[i];
        }
        temp[vagonCount - 1] = vagon;
        if (vagons != nullptr)
            delete[] vagons;
        vagons = temp;
    }
    void print() {
        cout << "Train model: " << model << endl;
        cout << "Vagon counter: " << vagonCount << endl;

        for (int i = 0; i < vagonCount; i++)
        {
            //cout << vagons[i] << endl;
            vagons[i].Show();
        }
    }
    void addOnePas(int vagonNumber) {
        bool found = false;
        for (int i = 0; i < vagonCount; i++) {
            if (vagons[i].number == vagonNumber) {
                vagons[i].passengers++;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Wrong vagon number" << endl;
        }
    }
    void operator++()//prefix
    {
        for (int i = 0; i < vagonCount; i++)
        {
            vagons[i].passengers++;
        }
    }
    // []  ()
    Vagon GetVagon(int index)//0
    {
        if (index < 0 || index > vagonCount) { return Vagon(); }
        return vagons[index];
    }
    Vagon operator[](int index)//0
    {
        if (index < 0 || index > vagonCount) { return Vagon(); }
        return vagons[index];
    }
    void ChangePasangers(int count)
    {
        for (int i = 0; i < vagonCount; i++)
        {
            vagons[i].passengers+= count;
        }
    }
    void operator()(int count)
    {
        for (int i = 0; i < vagonCount; i++)
        {
            vagons[i].passengers += count;
        }
    }
    void operator()(int vagon_number, int count)
    {
        bool found = false;
        for (int i = 0; i < vagonCount; i++) {
            if (vagons[i].number == vagon_number) {
                vagons[i].passengers+=count;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Wrong vagon number" << endl;
        }
    }
    operator string()
    {
        string res = "";
        for (int i = 0; i < vagonCount; i++)
        {
            res += vagons[i].number + " ";
        }
        return res;
       /* string res = "";
        for (int i = 0; i < vagonCount; i++)
        {
            res += to_string(vagons[i].number) + " ";
        }
        return res;*/
        //return model;
    }
};




int main()
{
    Train tr1;
    Train tr2("Kia");
    tr1.print();
    tr2.print();
    cout << endl;
    Train tr3(tr2);
    tr3.print();
    cout << endl;
    Vagon vagon1{ 1,20,10 };
    tr1.AddVagon(vagon1);
    tr1.AddVagon(Vagon(2,25,2));
    tr1.AddVagon(Vagon(3,25,2));
    tr1.AddVagon(Vagon(4,25,2));
    tr1.print();
    cout << endl;
    tr1.addOnePas(1);
    tr1.print();
    cout << "Increment " << endl;
    ++tr1;
    tr1.print();
    cout << "----------------------------" << endl;
    Vagon v = tr1.GetVagon(0);
    v.Show();
    v = tr1[0];
    cout << "Element in index 0 : "<<endl; v.Show();
    tr1.ChangePasangers(5);
    tr1.print();
    tr1(3);
    tr1.print();
    tr1(4, 10);
    v = tr1[3];
    v.Show();
    cout << (string)tr1 << endl;






}