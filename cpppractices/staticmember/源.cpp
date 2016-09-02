#include <iostream>
using namespace std;
class A {
private:
	static int i;
public:
	static int j;
	A(){ i = 0; }
	void print() { cout << i << endl; }
	void set(int ii) { this->i= ii; }
	static void function() { cout << "in static" << endl; }
};
int A::i;
int A::j;
int main() {
	A a, b;
	a.set(20);
	b.print();
	cout << A::j << endl;
	A::function();
	return 0;
}