#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
	vector<int>inp;
	int ser{}, dim{};
	int x, n;
	cin >> n;
	for (int i{}; i < n; i++) {
		cin >> x;
		inp.push_back(x);
	}
	int * right, *left;
	right = &inp[0];
	left = &inp[n - 1];
	for (int i{}; i < inp.size(); i++) {
		if (i % 2 == 0) {
			if (*right >= *left)
			{
				ser += *right;
				right++;
			}
			else
			{
				ser += *left;
				left--;
			}
		}
		else{
			if (*right >= *left)
			{
				dim += *right;
				right++;
			}
			else
			{
				dim += *left;
				left--;
			}
		}
	}
	cout << ser << " " << dim;
	return 0;
}