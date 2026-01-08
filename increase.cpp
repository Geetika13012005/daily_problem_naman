#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > 0)
                s.insert(x);
        }

        int k = s.size();   // number of distinct positive values

        if (k == 0)
            cout << 0 << "\n";
        else
            cout << 2 * k - 1 << "\n";
    }

    return 0;
}
