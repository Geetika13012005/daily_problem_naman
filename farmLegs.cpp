#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> n(t);
    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }

    vector<int> result(t);

    for (int i = 0; i < t; i++) {
        int legs = n[i];
        int count = 0;

        for (int cows = 0; cows * 4 <= legs; cows++) {
            if ((legs - cows * 4) % 2 == 0) {
                count++;
            }
        }

        result[i] = count;
    }

    for (int i = 0; i < t; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}
