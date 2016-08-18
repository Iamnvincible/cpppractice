// settinglimits.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
using namespace std;
class A
{
public:
	A();
	~A();
	void set(int i);
	void g(A* q);
private:
	int i;
	int *p;
};

A::A()
{
	p = 0;
	cout << "A::A()" << endl;
}

A::~A()
{
	if (p)delete p;
	cout << "A::~A()" << i << endl;
}
void A::set(int i) {
	this->i = i;
}
void A::g(A * q)
{
	cout << "A:g(),q->i=" << q->i << endl;
}
int main()
{
	A b,c;
	b.set(100);
	c.set(200);
	c.g(&b);
	A* d = new A();
	return 0;
}

