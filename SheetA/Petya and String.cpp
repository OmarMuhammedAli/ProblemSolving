#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
string ToSmall(string x);
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int x = s1.length();
	s1=ToSmall(s1); s2=ToSmall(s2);
	for (int i{}; i < x; i++) {
		if (s1[i] < s2[i]) {
			cout << -1; return 0;
		}
		else if (s1[i] > s2[i]) {
			cout << 1; return 0;
		}
		
	}
	cout << 0;
	return 0;
}
string ToSmall(string x) {
	for (int i = 0; i < x.length(); i++)
	{
		if (isalpha(x[i]) && x[i] < 97)
			x[i] += 32;
	}
	return x;
}