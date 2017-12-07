#include <iostream>
#include <future>

using namespace std;

int main()
{
	future<int> result(async([](int a, int b) {return a + b; }, 2, 3));
	cout << "Message from main" << endl;
	cout << result.get() << endl;
    return 0;
}

