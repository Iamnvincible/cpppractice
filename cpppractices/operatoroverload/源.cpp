#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
	Integer(int n = 0) :i(n) {}
	const Integer operator+ (const Integer& n) const {
		//this也是const
		return Integer(i + n.i);
	}//不能做左值
	const Integer operator-(const Integer& n)const {
		return Integer(-i);
	}
	int i;
};
const Integer operator* (const Integer& lhs, const Integer& that) {
	return Integer(lhs.i*that.i);
}
int main() {
	string d = "helloworld";
	string e = "microsoft";
	string f = d + e;
	cout << f << endl;

	Integer x(10), y(4540), z;
	z = x + y;
	z = x + 3;
	//z = 3 + y;//error1
	z = 3 * y;//success global
	z = 3 + 4;
	return 0;
}