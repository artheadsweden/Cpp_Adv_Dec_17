#include <iostream>
#include <string>
using namespace std;

class SomeClass{};

void some_func(int&& x){}

void str_func(string&& str)
{
	cout << str << endl;
}

int main()
{
	SomeClass&& var1 = SomeClass(); // && means rvalue reference
	auto&& var2 = var1;


	int x = 10;
	some_func(move(x));
	string str1 = "Hi there";

	str_func(move(str1));
	cout << "After call " << str1 << endl;
    return 0;
}

