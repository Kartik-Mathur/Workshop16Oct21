// Queue.cpp
// Bookmyshow
#include <iostream>
#include <queue>
using namespace std;

int main() {

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4); // 1 2 3 4

	// empty(): check empty or not
	// pop(): remove from the queue
	// front()
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	// cout << q.front() << endl;


	return 0;
}
















