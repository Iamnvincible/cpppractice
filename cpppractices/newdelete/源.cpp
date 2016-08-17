#include <iostream>
using namespace std;
class A
{
public:
	A();
	void set(int i);
	void f();
	~A();

private:
	int i;
};

A::A()
{
	i = 0;
	cout << "A::A()" << endl;
}

void A::set(int i)
{
	this->i = i;
}

void A::f()
{
	cout << "hello";
}

A::~A()
{
	cout << "A::~A(),i=" << i << endl;
}
int main() {
	A* p = new A[10];
	for (int i = 0; i < 10; i++)
	{
		p[i].set(i);
	}
	delete[] p;
}