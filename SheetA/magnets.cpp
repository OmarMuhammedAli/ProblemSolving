#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
	vector <string> s;
	int n;
	string x;
	cin >> n;
 
	for (int i{}; i < n; i++)
	{
		cin >> x;
		s.push_back(x);
	}
	int count{};
	for (int i{}; i < n; i++) {
		if (i != (n - 1)) {
			if (s.at(i) != s.at(i + 1))
				count++;
		}
	}
	if (n != 0)
		count++;
	cout << count;
	
	return 0;
}