// StairCaseSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 4, 6, 7},
		{2, 5, 8, 9},
		{3, 10, 12, 15},
		{11, 18, 20, 23}
	};

	int m = 4, n = 4;

	int i = 0, j = m - 1;
	int key = 110;
	bool isPresent = false;
	while (j >= 0 and i < n) {
		if (key == a[i][j]) {
			cout << "Key found: " << i << "," << j << endl;
			isPresent = true;
			break;
		}
		else if (key > a[i][j]) {
			i++;
		}
		else {
			j--;
		}
	}

	if (isPresent == false) {
		cout << "Not Found" << endl;
	}

	return 0;
}
















