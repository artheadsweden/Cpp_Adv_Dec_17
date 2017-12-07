// r and lvalue.cpp : Defines the entry point for the console application.
//
#include <iostream>

using namespace std;

int x = 2;
int& foo() { return x; }
int foobar() { return 3; }

//void func(int i){}

void func(int& i)
{
	cout << "i is lvalue" << endl;
}

void func(int&& i)
{
	cout << "i is rvalue" << endl;
}

int main()
{
	int y = 10;
	//10 = y;
	foo() = 12;
	//foobar() = 3;
	func(y);
	func(13);
    return 0;
}

