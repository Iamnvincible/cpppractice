#include <iostream>
using namespace std;
class Integer
{
public:
	Integer(int i);
	~Integer();
	//overload + - * / % ^ & | ~
	//			! && || < <= == >= >
	//++ --
	const Integer& operator+=(const Integer& that){
		return this->i + that.i;
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

}