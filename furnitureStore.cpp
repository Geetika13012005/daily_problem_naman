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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> res;
        int min_price = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (a[i] > min_price) {
                res.push_back(i + 1); // 1-based index
            } else {
                min_price = a[i];
            }
        }

        cout << res.size() << "\n";
        for (int idx : res) {
            cout << idx << " ";
        }
        cout << "\n";
    }
    return 0;
}
