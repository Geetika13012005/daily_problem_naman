#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n), pos(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        int L = pos[n], R = pos[n];
        bool ok = true;

        for (int x = n - 1; x >= 1; x--) {
            int i = pos[x];
            if (i == L - 1) L--;
            else if (i == R + 1) R++;
            else {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
