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
	//�Ѹ���ȫ��ͬ�����������ˣ���������
	int j;
};

int main() {
	A a, b;
	a.f();

	cout << sizeof(a) << endl;
	int *p = (int *)&a;
	int *q = (int *)&b;
	//�����p==q
	int *add = (int *)*q;//��qת����һ��ָ�룬��ô�Ϳ��Կ����ָ���ַ����
	cout << *++p << endl;//�õ���Ա����
	cout << add << endl;//�õ��麯����ָ���ַ

	A aa;
	B bb;
	bb.f();
	A* point = &bb;
	point->f();
	aa = bb;//��bb��ֵ��aa,vtable������
	aa.f();
	//ͨ��ָ���������ȥ����virtual�����Ż��Ƕ�̬�󶨣��õ㲻���Ƕ�̬��
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