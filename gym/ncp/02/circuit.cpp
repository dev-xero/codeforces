#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;

void solve() {
    ll n;
    cin >> n;

    vll switches(2 * n);

    for (auto &u : switches) {
        cin >> u;
    }

    int min_l = 0, max_l = 0;

    for (int i = 0; i < 2 * n; i++) {
        if (switches[i] == 1) {
            max_l++;
        } else {
            min_l++;
        }
    }

    if (max_l % 2 == 1) {
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }

    cout << min(min_l, max_l) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll tests;
    cin >> tests;

    while (tests--) {
        solve();
    }

    return 0;
}