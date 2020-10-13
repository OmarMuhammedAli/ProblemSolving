#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
	string s;
	int a[4];
	for (int i{}; i < 4; i++)
		cin >> a[i];
	cin >> s;
	int x = s.length();
	int y;
	int cal{};
	for (int i{}; i < x; i++) {
		y = s[i]-'0';
		cal += a[y - 1];
		
	}
	cout << cal;
 
	
	return 0;
	
}