#include <iostream>
#include <thread>
#include <mutex>
#include <string>
using namespace std;
//Using RAII
//Resource Acquisition Is Initialization
class ThreadGuard
{
public:
	explicit ThreadGuard(thread& t_): t(t_){}
	~ThreadGuard()
	{
		if (t.joinable())
		{
			t.join();
		}
	}
	ThreadGuard(const ThreadGuard&) = delete;
	ThreadGuard& operator=(const ThreadGuard&) = delete;
private:
	thread& t;
};

int main()
{
	mutex coutMutex;
	auto f = [&coutMutex]() {
		for (int i = 0; i < 100; i++){
			coutMutex.lock();
			cout << this_thread::get_id() << " does work " << i << endl;
			coutMutex.unlock();
		}
	};

	thread t(f);
	thread t1(f);
	{
		cout << "Start up" << endl;
		ThreadGuard tg(t);
		cout << "After t" << endl;
		ThreadGuard tg2(t1);
		cout << "After t1" << endl;
	}

	cout << "After scope" << endl;
    return 0;
}

