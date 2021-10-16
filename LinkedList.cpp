// LinkedList.cpp
#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> l;// Double linkedlist

	l.push_front(1); // 1
	l.push_front(2); // 2 1
	l.push_front(3); // 3 2 1
	l.push_back(4); // 3 2 1 4
	l.push_back(5); // 3 2 1 4 5
	l.push_back(6);

	l.pop_front();

	l.sort();

	for (auto data : l) {
		cout << data << " ";
	}
	cout << endl;



	return 0;
}
















