#include <iostream>
using namespace std;
class Person
{
public:
	Person();
	~Person();
	void introduce();
	virtual void Performance();
protected:
	char name[10];
};

Person::Person():name("person")
{
}

Person::~Person()
{
}

void Person::introduce()
{
	cout << "my name is" << this->name << endl;
}

void Person::Performance()
{
	cout << "normal" << endl;
}
class Student:public Person
{
public:
	Student();
	~Student();
	virtual void Performance();
private:

};

Student::Student()
{
}

Student::~Student()
{
}

void Student::Performance()
{
	cout << "studnet" << endl;
}
void render(Person * p) {
	p->Performance();
}
int main() {
	Person p;
	Student s;
	p.introduce();
	p.Performance();
	s.introduce();
	s.Performance();

	render(&p);
	render(&s);

}