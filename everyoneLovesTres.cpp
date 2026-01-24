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

        if (n == 1 || n == 3) {
            cout << -1 << '\n';
        }
        else if (n % 2 == 0) {
            cout << string(n - 2, '3') << "66\n";
        }
        else {
            cout << string(n - 5, '3') << "36366\n";
        }
    }
    return 0;
}
