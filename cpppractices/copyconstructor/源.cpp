#include <iostream>
#include <string>
using namespace std;

static int countobj = 0;
class Obj {
public:
	Obj() { countobj++; print("how many "); }
	Obj(int i) { countobj++; }
	Obj(const Obj& o) { countobj++; }
	void print(const string& msg = "") {
		if (msg.size() != 0)cout << msg << "";
		cout << "countobj=" << countobj << endl;
	}
	~Obj() {
		countobj--;
		print("~Obj()");
	}
};
Obj f(Obj o) {
	cout << "begin f(Obj o)" << endl;
	o.print("in f(Obj o)");
	cout << "end of f(Obj o)" << endl;
	return o;
}
int main() {
	Obj o;
	o.print("after construction of o");
	//Obj o2=f(o);//会调用cpp自带拷贝构造
	Obj o2 = 10;
	Obj o3 = f(o);
	o.print("after call to f()");
}