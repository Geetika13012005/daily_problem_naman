#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        
        int L = 0;
        while (L < m && a[L] == L + 1) {
            L++;
        }

        bool ok = true;
        for (int i = L; i < m; i++) {
            if (a[i] != a[i - L]) {
                ok = false;
                break;
            }
        }

       
        if (!ok) {
            cout << 1 << "\n";
        } else {
            cout << max(0, n - L + 1) << "\n";
        }
    }
    return 0;
}
