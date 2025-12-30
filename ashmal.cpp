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

        vector<string> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        string s = "";
        for (int i = 0; i < n; i++) {
            if (a[i] + s < s + a[i])
                s = a[i] + s;
            else
                s = s + a[i];
        }

        cout << s << "\n";
    }
    return 0;
}
