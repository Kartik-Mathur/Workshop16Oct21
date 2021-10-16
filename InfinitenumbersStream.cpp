// InfinitenumbersStream.cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > q) {
	while (!q.empty()) {
		cout << q.top() << endl;
		q.pop();
	}
}

int main() {
	priority_queue<int, vector<int>, greater<int> > q; // Minheap

	int k = 3;
	while (true) {
		int no;
		cin >> no;
		if (no == -1) {
			// Print the heap
			printHeap(q);
		}
		else {
			if (q.size() < k) {
				q.push(no);
			}
			else {
				if (q.top() < no) {
					q.pop();
					q.push(no);
				}
			}
		}

	}

	return 0;
}
















