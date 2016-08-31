#include <iostream>
using namespace std;
class Baseclass {
public :
	virtual void print() {
		cout << "Baseclass print" << endl;
	}
	virtual void print(int i) {
		cout << "Baseclass pirnt(int i) = " << i << endl;
	}
};
class Derived :public Baseclass {
public :
	 virtual void print() {
		cout << "Derived print" << endl;
	}
	 virtual void print(int i) {
		 cout << "Derived print(int i) = " << i << endl;
	 }
};

int main() {
	Derived d;
	d.print();//derived print can not see Baseclass print
	d.print(12);
	Baseclass b = d;
	b.print();//Baseclass print
	Baseclass *p = &d;//has vtable
	p->print();//no virtual Baseclass print ;  virtual derived print;

}