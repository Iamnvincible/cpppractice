#include <iostream>
using namespace std;
class A
{
public:
	A() :i(0)
	{
		cout << "A::A()" << endl;
	}

	~A()
	{
		cout << "A::~A()" << endl;
	}
	void print() {
		cout << "A::print" << i << endl;
	}
protected:
	void set(int ii) {
		i = ii;
	}

private:
	int i;
};

class B :public A {
public:
	void f() {
		set(20);
		print();
	}
};
int main() {
	B b;
	//b.set(10);
	b.print();
	b.f();
	return 0;
}
