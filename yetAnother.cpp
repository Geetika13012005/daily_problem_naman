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

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long answer = -1;

        for (long long x = 2; x <= 200 && answer == -1; x++) {
            bool ok = false;

            for (int i = 0; i < n; i++) {
                if (__gcd(a[i], x) == 1) {
                    ok = true;
                    break;
                }
            }

            if (ok) {
                answer = x;
                break;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
