#include <iostream>
using namespace std;
class A {
public:
	int i;
	A() :i(20) {}
};
void fobj(const A& a) {
	//a.i = 4;
}
void fref(const int & a) {

}
const A fconst(A a) {
	a.i = 45;
	return a;
}
A* f() {
	A* a = new A();
	return a;
}
A fu() {
	A a;
	return a;
}
int main() {
	A b;
	int var = 5;
	fobj(b);
	fref(4);
	//fconst(b).i = 56;//error
	b=fconst(b);
	f()->i= 99;

	//fu().i = 90;这里有个问题，为什么我的编译不过啊
	cout << b.i << endl;
	return 0;
}