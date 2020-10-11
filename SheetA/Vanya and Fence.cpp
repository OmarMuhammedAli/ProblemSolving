#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, h;
	cin >> n >> h;
	int H;
	int w=0;
	/*for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		H.push_back(x);
	}*/
	for (int i = 0; i < n; i++)
	{
		cin >> H;
		if (H <= h)
			w++;
		else
			w += 2;
	}
	cout << w;
}