#include <iostream>
using namespace std;
class A {
public:
	int i;
	A() :i(10) {}
};
class B :public A {
private:
	int lin;
public:
	B() :lin(20) {}
	void print() { cout << "lin = " << lin << endl; }
};
int main() {
	A a;
	B b;
	cout << "a.i=" << a.i << " " << "b.i=" << b.i << endl;
	cout << sizeof(a) << " " << sizeof(b) << endl;
	int *p = (int *)&a;
	cout << "p's address is " << p << endl;
	cout << "p's content is " << *p << endl;
	*p = 1234;
	cout << "now p is " << *p << " and a.i=" << a.i << endl;
	p = (int *)&b;
	cout << "p's address is " << p << endl;
	cout << "p's content is " << *p << endl;
	p++;
	*p = 2333;
	cout << "p's address is " << p << endl;
	cout << "p's content is " << *p << endl;
	b.print();

	return 0;
}