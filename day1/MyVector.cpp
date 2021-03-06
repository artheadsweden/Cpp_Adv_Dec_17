#include <iostream>

using namespace std;

class MyVector
{
public:
	MyVector(int x = 0) : m_size(0), m_pInt(new int[m_size]) {
		for (int i = 0; i < m_size; i++)
		{
			m_pInt[i] = 0;
		}
	}

	~MyVector() {
		delete[] m_pInt;
	}

	MyVector(const MyVector& other) : m_size(other.m_size), m_pInt(new int[m_size]) {
		copy(other.m_pInt, other.m_pInt + other.m_size, m_pInt);
	}

	MyVector(MyVector&& other): m_size(0), m_pInt(nullptr){
		other.swap(*this);
	}

	MyVector& operator=(const MyVector& other) {
		MyVector tmp(other);
		return *this;
	}

	MyVector& operator=(MyVector&& other) {
		m_size = 0;
		delete[] m_pInt;
		m_pInt = nullptr;
		other.swap(*this);
		return *this;
	}

	void swap(MyVector& other) {
		using std::swap;
		swap(m_size, other.m_size);
		swap(m_pInt, other.m_pInt);
	}

private:
	size_t m_size;
	int* m_pInt;
};

int main()
{
    return 0;
}

