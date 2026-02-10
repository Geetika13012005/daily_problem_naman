#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        multiset<int> ms;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ms.insert(x);
        }

        int ans = 0;

        while (true) {
            // find smallest x <= h
            auto it_row = ms.upper_bound(h);
            if (it_row == ms.begin()) break;
            --it_row;
            int row = *it_row;
            ms.erase(it_row);

            auto it_col = ms.upper_bound(l);
            if (it_col == ms.begin()) {
                ms.insert(row);
                break;
            }
            --it_col;
            ms.erase(it_col);

            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}
