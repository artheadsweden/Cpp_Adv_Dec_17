#include <iostream>
#include <thread>
#include <atomic>
using namespace std;


int main()
{
	atomic<int> x = 0;
	auto worker = [&x]()
	{
		for (int i = 0; i < 20; i++)
		{
			x++;
		}
	};
	thread t1(worker);
	thread t2(worker);
	thread t3(worker);
	thread t4(worker);
	thread t5(worker);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	cout << x << endl;
	return 0;
}

