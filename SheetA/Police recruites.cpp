#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
	int n{};
	int events;
	cin >> n;
	int cnt{};
	int cnt2{};
	for (int i{}; i < n; i++) {
		cin >> events;
		if (events >= 0||cnt>0)
			cnt += events;
		
		else
			cnt2++;
 
			
	}
	cout << cnt2;
	return 0;
	
}