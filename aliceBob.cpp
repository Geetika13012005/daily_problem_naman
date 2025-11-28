#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long a;
        cin >> n >> a;

        vector<long long> v(n);
        for (auto &x : v) cin >> x;

        long long leftWins = 0, rightWins = 0;

        for (long long x : v) {
            if (abs(x - 0) < abs(x - a)) leftWins++;
            if (abs(x - 2000000000LL) < abs(x - a)) rightWins++;
        }

        if (leftWins >= rightWins) cout << 0 << "\n";
        else cout << 2000000000LL << "\n";
    }
}
