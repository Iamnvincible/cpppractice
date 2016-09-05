#include <iostream>
using namespace std;
class Integer
{
public:
	Integer(int i);
	~Integer();
	int get() {
		return i;
	}
	//overload + - * / % ^ & | ~
	//			! && || < <= == >= >
	//++ --
	const Integer& operator+=(const Integer& that){
		this->i + that.i;
		return *this;
	}
	//++a
	const Integer& operator++() {
		*this += 1;
		return *this;
	}
	//a++
	const Integer& operator++(int) {
		Integer old(this->i);
		++(*this);
		return old;

	}
	//--a
	const Integer& operator--() {

	}
private:
	int i;
};

Integer::Integer(int i)
{
	this->i = i;
}

Integer::~Integer()
{
}
int main() {
	Integer a(10), b(20);
	a ++;
	cout << a.get() << endl;

}