#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
	int n{};
	string s;
	cin >> n >> s;
	int count{};
	for (int i{}; i < n; i++)
		if (s[i] == s[i + 1])
			count++;
	cout << count;
	return 0;
}