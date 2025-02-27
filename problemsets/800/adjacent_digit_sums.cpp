#include <bits/stdc++.h>

using namespace std;

#define Yes cout << "Yes\n"
#define No cout << "No\n"

void solve() {
    int x, y;
    cin >> x >> y;
    // (x + 1 - y) / 9 should be positive and  an integer
    if (x + 1 >= y && (x + 1 - y) % 9 == 0) {
        Yes;
    } else {
        No;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}