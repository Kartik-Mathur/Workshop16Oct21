// Priority_Queue.cpp
// heap
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

	// priority_queue<int> q; // Maxheap
	priority_queue<int, vector<int>, greater<int> > q; // Minheap

	q.push(5);
	q.push(3);
	q.push(6);
	q.push(8);
	q.push(7);

	while (!q.empty()) {
		cout << q.top() << endl;
		q.pop();
	}


	return 0;
}
















