// move 01.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass() { cout << "Default constructor" << endl; }
	MyClass(const MyClass& other) { cout << "Copy constructor" << endl; }
	MyClass(MyClass&& other) { cout << "Move constructor" << endl; }

	MyClass operator = (const MyClass& other) { cout << "Copy assignment operator" << endl; return *this; }
	MyClass operator = (MyClass&& other) { cout << "Move assignment operator" << endl; return *this; }
};

int main()
{
	MyClass a;
	MyClass b = a;
	MyClass c = move(a);
	a = move(b);
    return 0;
}

