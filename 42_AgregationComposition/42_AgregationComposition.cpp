#include <iostream>
using namespace std;

class Document
{
	string name;
	string text;
	string format;
	int count;
public:
	Document() :name("none"), text("none"), format("none"), count(0) {}
	Document(string n, string t, string f, int c) :name(n), text(t), format(f), count(c) {}
	void Show()
	{
		cout << "Name : " << name << endl;
		cout << "Text : " << text << endl;
		cout << "Format : " << format << endl;
		cout << "Count : " << count << endl;
	}
};

class Scanner
{
	float dpi;
	float power;
	float height, width;
public:
	Scanner():dpi(0),power(0),height(0),width(0){}
	Scanner(float d,float p, float h, float w):dpi(d),power(p),height(h),width(w){}
	void Show()const
	{
		cout << "DPI : " << dpi << endl;
		cout << "Power : " << power << endl;
		cout << "Height : " << height << endl;
		cout << "Width : " << width << endl;
	}

};
class Cartridge
{
	string color;
	float volume;
public:
	Cartridge():color("none"),volume(0){}
	Cartridge(string c, float v):color(c),volume(v){}
	void Show()const
	{
		cout << "Color : " << color << endl;
		cout << "Volume : " << volume << endl;
	}	
};

class Printer
{
	string model;
	//Composition
	Scanner scanner;//default c-tor
	Cartridge *cartridges;
	int countCartridges;
	//Agregation
	Document* doc;
public:
	Printer():model("no model"),cartridges(nullptr), countCartridges(0),doc(nullptr){}
	Printer(string model, float d,float p, float h, float w):model(model), doc(nullptr)
	{

		scanner = Scanner(d,p,h,w);
		countCartridges = 5;
		cartridges = new Cartridge[countCartridges];
		cartridges[0] = Cartridge("black", 500);
		cartridges[1] = Cartridge("red", 200);
		cartridges[2] = Cartridge("green", 200);
		cartridges[3] = Cartridge("blue", 200);
		cartridges[4] = Cartridge("yellow", 200);
	}
	~Printer()
	{
		if (cartridges != nullptr)
			delete[]cartridges;
	}
	void AddDocument(Document *d)
	{
		doc = d;
	}
	void Cancel()
	{
		doc = nullptr;
	}
	void PrintDocument()
	{
		cout << "Printing........" << endl;
		if (doc != nullptr)
			doc->Show();
		else
			cout << "Document not found" << endl;
		
	}
	void PrintSetting() {
		cout << "Pring setting : " << endl;
		for (int i = 0; i < countCartridges; i++)
		{
			cartridges[i].Show();
		}
	}
	void Scan()
	{
		cout << "Scanning..............." << endl;
		scanner.Show();
	}
};


int main()
{
	Printer printer("Epson", 300, 300, 50, 30);
	printer.Scan();
	printer.PrintDocument();

	Document document("Passport", "Fullname", "A5", 4);
	Document book("C++ for beginners", "C++", "A4",1528);
	//document.Show();

	cout << "------------Print Passport ----------------" << endl;
	printer.AddDocument(&document);
	printer.PrintDocument();
	cout << "------------Print Book ----------------" << endl;
	printer.AddDocument(&book);
	printer.Cancel();
	printer.PrintDocument();

	




}

