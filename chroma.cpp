#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        // Case when x == n
        if (x == n) {
            for (int i = 0; i < n; i++) {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }

        // Case when x < n
        // 1) 0 to x-1
        for (int i = 0; i < x; i++) {
            cout << i << " ";
        }

        // 2) x+1 to n-1
        for (int i = x + 1; i < n; i++) {
            cout << i << " ";
        }

        // 3) x at the end
        cout << x << "\n";
    }

    return 0;
}
