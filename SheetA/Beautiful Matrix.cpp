#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i, j;
	int mat[5][5];
	int row{}, col{};
 
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			cin >> mat[i][j];
	}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (mat[i][j] == 1) {
				row = i; col = j;
			}
	int moves{};
	moves = abs(row - 2) + abs(col - 2);
	cout << moves;
	return 0;
}