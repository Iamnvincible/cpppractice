#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;
int main() {
	vector<int> v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator p;
	for (p = v.begin(); p != v.end(); p++) {
		cout << *p << "";
	}
	list<string> s;
	s.push_back("hello");
	s.push_back("world");
	s.push_front("tide");
	s.push_front("crimson");
	s.push_back("azure");
	s.push_back("blue");
	s.push_front("alabama");
	list<string>::iterator q;
	for (q = s.begin(); q != s.end(); q++) {
		cout << *p << " ";
	}
	return 0;
}