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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin(), b.end());

        // pos[x] = position of x in sorted array (1-based)
        unordered_map<int, int> pos;
        for (int i = 0; i < n; i++) {
            pos[b[i]] = i + 1;
        }

        bool ok = true;
        for (int i = 0; i + 1 < n; i++) {
            if (abs(pos[a[i]] - pos[a[i + 1]]) % 2 == 0) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
