#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

static int countobj = 0;
class Obj {
public:
	char * name;
	Obj() { countobj++; print("how many "); }
	Obj(const char * i) { name = new char[::strlen(i) + 1]; ::strcpy(name, i); }
	Obj(int i) { countobj++; }
	//Obj(const Obj& o) { countobj++; }
	void print(const string& msg = "") {
		if (msg.size() != 0)cout << msg << "";
		cout << "countobj=" << countobj << endl;
	}
	~Obj() {
		countobj--;
		print("~Obj()");
		delete[] name;
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
	char* a = "hello";
	Obj o4 = "hello";
	Obj o5 = o4;
	printf("%p\n", o4.name);
	printf("%p\n", o5.name);


}