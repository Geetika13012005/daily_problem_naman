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
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        for (int i = 0; i < n; i++) {
            int mx = p[i];
            int pos = i;
            for (int j = i; j < n; j++) {
                if (p[j] > mx) {
                    mx = p[j];
                    pos = j;
                }
            }

            if (pos != i) {
                reverse(p.begin() + i, p.begin() + pos + 1);
                break; // only one operation allowed
            }
        }

        for (int x : p) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
