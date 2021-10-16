// Stack.cpp
// https://leetcode.com/problems/largest-rectangle-in-histogram/
#include <iostream>
#include <stack>
using namespace std;

int main() {

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop(); // From the top
	}


	return 0;
}
















