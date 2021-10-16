#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool mycompare(int a, int b) {
	return a < b;
}

int main() {

	vector<int> v; // v is called as object of vector class
	// 7, 5, 9, 10, 11, 15, 12, 10, 10, 10, 10
	int a[] = {7, 5, 9, 10, 11, 15, 12, 10, 10, 10, 10, 1, 2};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
		v.push_back(a[i]);
	}

	cout << endl << "Capacity: " << v.capacity() << endl;
	// v.pop_back();
	// v.pop_back();
	// Let's sort the data
	// sort(begin_address,end_address);
	// 1,2,3
	// starting add: 100, 100+3:112
	// sort(a, a + n);

	sort(v.begin(), v.end(), mycompare);
	int key = 12;
	auto it = find(v.begin(), v.end(), key);// O(N)
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}

	cout << endl;
	if (it == v.end()) {
		cout << "Not found" << endl;
	}
	else {
		cout << "Found: " << (*it) << endl;
	}

	// Applying binary Search
	key = 10;
	// it = lower_bound(v.begin(), v.end(), key); // log(N)
	it = upper_bound(v.begin(), v.end(), key); // log(N) > key(10)
	if (it == v.end()) {
		cout << "Not found" << endl;
	}
	else {
		cout << "Found: " << (*it) << endl;
		cout << "Position: " << (it - v.begin()) << endl;
	}


	// bool isPresent = false;
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	// cout << v[i] << " ";
	// 	if (v[i] == key) { // key--> 12
	// 		cout << "Key found" << endl;
	// 		isPresent = true;
	// 		break; // It will stop the loop, as it gets executed
	// 	}
	// }
	// if (isPresent == false) {
	// 	cout << "Key not found" << endl;
	// }
	// cout << endl;




	return 0;
}
















