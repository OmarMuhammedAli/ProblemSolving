#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
	string s;
	cin >> s;
	int letter = 'a', sum{};
	int n = s.length();
	for (int i{}; i < n; i++) {
		int x = abs(letter - s[i]);
		letter = s[i];
		if (x < 13)
			sum += x;
		else
			sum += (26 - x);
	}
	cout << sum;
	return 0;
	
}