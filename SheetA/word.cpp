#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
void ToSmall(string x) {
	for (int i = 0; i < x.length(); i++)
	{
		if (isalpha(x[i]) && x[i] < 97)
			x[i] += 32;
	}
	cout << x;
}
void ToCap(string x) {
	for (int i = 0; i < x.length(); i++)
	{
		if (isalpha(x[i]) && x[i] >'Z')
			x[i] -= 32;
	}
	cout << x;
}
int main() {
	string s;
	cin >> s;
	int cap{}, sm{};
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) {
			if (s[i] >= 'a'&&s[i] <= 'z')
				sm++;
			else
				cap++;
		}
	}
	if (sm >= cap)
		ToSmall(s);
	else
		ToCap(s);
	
	return 0;
}