#include <iostream>
using namespace std;
template <class T>
void Myswap(T& x, T& y) {
	T temp = x;
	x = y;
	y = temp;
}
int main() {
	int a = 4, b = 7;
	Myswap(a, b);
	cout << a << endl;
	float c = 4.5f, d = 6.4f;
	Myswap(c, d);
	cout << c << endl;
	return 0;
}