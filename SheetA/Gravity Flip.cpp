#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n{};
	cin >> n;
	vector <int> ele;
	for (int i{}; i < n; i++)
	{
		int x;
		cin >> x;
		ele.push_back(x);
	}
	sort(ele.begin(), ele.end());
	for (int i{}; i < n; i++) {
		cout << ele[i] << " ";
	}
	return 0;
}