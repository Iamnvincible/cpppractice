#include <iostream>
using namespace std;
class A {
public:
	A() :i(10) {}
	virtual void f() { cout << "A::f()" << i << endl; }
	virtual void f(int i) { cout << "A::f(int i)" << endl; }
	int i;
};
class B :public A {
public:
	B() :j(20) {}
	virtual void f() { cout << "B::f()" << j << endl; }
	//把父类全部同名函数覆盖了，包括重载
	int j;
};

int main() {
	A a, b;
	a.f();

	cout << sizeof(a) << endl;
	int *p = (int *)&a;
	int *q = (int *)&b;
	//上面的p==q
	int *add = (int *)*q;//把q转换成一个指针，那么就可以看这个指针地址，↓
	cout << *++p << endl;//拿到成员变量
	cout << add << endl;//拿到虚函数的指针地址

	A aa;
	B bb;
	bb.f();
	A* point = &bb;
	point->f();
	aa = bb;//把bb的值给aa,vtable不传递
	aa.f();
	//通过指针或者引用去调用virtual函数才会是动态绑定，用点不会是动态绑定
	point = &aa;
	point->f();
	cout << endl;
	A aaa;
	B bbb;
	A* ppp = &aaa;
	int * r = (int *)&aaa;
	int * s = (int *)&bbb;
	bbb.i = 3333;
	*r = *s;
	ppp->f();
	cout << aaa.i << endl;


	A *abcd = new A();
	B *efgh = new B();
	abcd = efgh;
	A *bcd = new B();
	return 0;
}