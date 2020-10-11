#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	string s1;
	for (int i{}; i < s.length(); i++)
	{
		if (s[i] != s[i + 1])
			s1 += s[i];
	}
	if (s1.length() % 2 == 0)
		cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}