#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <mutex>
using namespace std;

mutex coutMutex;
class Worker
{
public:
	Worker(string n): name(n){}

	void operator()()
	{
		for (int i = 0; i <= 3; i++)
		{
			this_thread::sleep_for(chrono::microseconds(200));
			{
				lock_guard<mutex> coutLock(coutMutex);
				cout << name << " is doing work " << i << endl;
			}
		}
	}
private:
	string name;
};

int main()
{
	cout << "Boss says: Start working" << endl;
	thread bob(Worker("Bob"));
	thread sara(Worker("Sara"));
	thread tom(Worker("Tom"));
	thread pete(Worker("Pete"));
	thread lisa(Worker("Lisa"));

	bob.join();
	sara.join();
	tom.join();
	pete.join();
	lisa.join();
	cout << "Boss says: Great, you can now all go home" << endl;
    return 0;
}

