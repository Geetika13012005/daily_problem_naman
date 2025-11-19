#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, c, l;
    cin >> g >> c >> l;

    int mx = max({g, c, l});
    int mn = min({g, c, l});

    if (mx - mn >= 10) {
        cout << "check again";
    } else {
        vector<int> a = {g, c, l};
        sort(a.begin(), a.end());
        cout << "final " << a[1]; 
    }

    return 0;
}
