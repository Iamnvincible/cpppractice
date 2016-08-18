#include <iostream>
using namespace std;
struct X;
struct Y
{
	void f(X*);
};
struct X
{
private:
	int i;
public:
	void initialize();
	friend void g(X* x, int i);//È«¾Öfriend
	friend void Y::f(X*);//stuct member friend
	friend struct Z;//entire stuct is a friend
	friend void h();
};
void X::initialize() {
	i = 0;
}

void g(X *x, int i)
{
	x->i = i;
	X b;
	b.i = 3344;
}
void h()
{
	X x;
	x.i = 9;
}
void Y::f(X* x) {
	x->i = 444;
}
struct Z{
private:
	int j;
public:
	void f() {
		X a;
		a.i = 9;
	}
};
