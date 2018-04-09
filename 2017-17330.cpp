#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int num;



void main(int argc, char **argv) {
	vector<int> ivec;
	while (cin >> num) {
		ivec.push_back(num);
	}

	for (auto i : ivec) {
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	cout << "ordered array" << endl;
	
	sort(ivec.rbegin(), ivec.rend());
	for (auto i : ivec) {
		cout << i << " ";
	}
	cout << endl;

	system("pause");

}
