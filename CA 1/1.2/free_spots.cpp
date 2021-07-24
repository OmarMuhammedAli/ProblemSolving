#include <string.h>
#include <cmath>
#include <iostream>
#include <string>
#include <set>
#include <algorithm>

#define endl '\n'
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int w, h, n, x1, y1, x2, y2, total, count, free;
    while (true)
    {
        cin >> w >> h >> n;
        if (!(w + h + n))
            break;
        set<string> occupied;
        count = 0, free = 0;
        total = w * h;
        int min_x, min_y, max_x, max_y;
        for (int i{}; i < n; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            min_x = min(x1, x2);
            min_y = min(y1, y2);
            max_x = max(x1, x2);
            max_y = max(y1, y2);
            for (int j{min_x - 1}; j < max_x; j++)
            {
                for (int k{min_y - 1}; k < max_y; k++)
                {
                    if (occupied.find(to_string(j) + to_string(k)) != occupied.end())
                        continue;
                    count++;
                    occupied.insert(to_string(j) + to_string(k));
                    // cout << to_string(j) + to_string(k) << endl;
                }
            }
            // count += (y2 - (y1 - 1)) * (x2 - (x1 - 1));
        }
        free = total - count;
        if (!free)
            cout << "There is no empty spots." << endl;
        else if (free == 1)
            cout << "There is one empty spot." << endl;
        else
        {
            cout << "There are " << free << " empty spots." << endl;
        }
    }
    return 0;
}