#include <future>
#include <iostream>
#include <vector>

using namespace std;

int twice(int x)
{
	//cout << "In twice. x = " << x << endl;
	return x * 2;
}

int main()
{
	vector<future<int>> futures;
	for (int i = 0; i < 10; i++)
	{
		futures.push_back(async([](int x) {return x * 2; }, i));
		//futures.push_back(async(twice, i));
		//cout << "In for with value " << i << endl;
	}

	for (auto &f : futures)
	{
		cout << f.get() << endl;
	}
    return 0;
}

