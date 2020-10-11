#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x;
	int f{};
	int sum{};
	for (int i{}; i < n; i++)
	{
		for (int j{}; j < 3; j++) {
 
		cin >> x;
			if (x == 0)
				f++;
		}
		if (f <2)
			sum++;
		f = 0;
	}
	cout <<  sum;
}