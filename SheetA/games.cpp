#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int team[30][2];
	for (int i{}; i < n; i++)
		cin >> team[i][0] >> team[i][1];
	int ans{};
	for (int i{}; i < n; i++) {
		int c1{ team[i][0] }, c2{ team[i][1] };
		for (int j{ 1 }; j < n-i; j++) {
			int x1{ team[j + i][0] }, x2{ team[j + i][1] };
			if (c1 == x2)
				ans++;
			if (c2 == x1)
				ans++;
		}
 
	}
	cout << ans << endl;
	return 0;
}