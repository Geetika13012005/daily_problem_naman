#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;

        long long dx = llabs(x);
        long long dy = llabs(y);

        for (char c : s) {
            if (dx == 0 && dy == 0) break;

            if (c == '8') {
                // diagonal if possible, else reduce the remaining positive coordinate
                if (dx > 0 && dy > 0) {
                    dx--; dy--;
                } else if (dx > 0) {
                    dx--;
                } else if (dy > 0) {
                    dy--;
                }
            } else { // c == '4'
                // orthogonal: reduce the larger remaining distance first (safe tie-break)
                if (dx >= dy) {
                    if (dx > 0) dx--;
                    else if (dy > 0) dy--;
                } else {
                    if (dy > 0) dy--;
                    else if (dx > 0) dx--;
                }
            }
        }

        cout << ((dx == 0 && dy == 0) ? "YES\n" : "NO\n");
    }
    return 0;
}
