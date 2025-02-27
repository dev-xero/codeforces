#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;

ll solve(ll x, ll y, ll k) {
    if (x == 0 && y == 0) return 0;

    ll tx = 2 * ((x + k - 1) / k) - 1;
    ll ty = 2 * ((y + k - 1) / k);

    return max(tx, ty);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        cout << solve(x, y, k) << '\n';
    }

    return 0;
}