#include <iostream>
using namespace std;
class Point {
private:
	const float x, y;
public:
	Point(float xa = 0.01, float ya = 0.01) :y(ya), x(xa) {}
	void print() {
		cout << this->x << this->y << endl;
	}

};
int main() {
	Point p;
	p.print();
}
