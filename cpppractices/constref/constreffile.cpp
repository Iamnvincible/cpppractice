#include <iostream>
using namespace std;
int main() {
	int i = 42;
	const int &r1 = i;
	const int &r2 = 42;
	const int &r3 = r1*r2;
	//int &r4 = r1 * 2;//�����ǳ�����r4�������ó���
	return 0;
}