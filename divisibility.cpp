#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x;
        cin >> x;
        int digits = 0;
        long long temp = x;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        if (digits == 0) digits = 1; 
        int K = digits + 1;
        
        long long pow10 = 1;
        for (int i = 0; i < K; ++i) pow10 *= 10LL; 
        long long y = (pow10 - 1) - x;
        cout << y << '\n';
    }
    return 0;
}
