#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll ans = LLONG_MAX;

    for(int take = 1; take <= n; take++) {
        vector<ll> curr = a;
        ll sum = 0;
        ll added = 0;
        
        for(int i = n-take; i < n; i++) {
            sum += curr[i];
        }
        
        if(sum < k) {
            added = k - sum;
            curr[n-take] += added;
        }
        
        for(int i = n-1; i > n-take; i--) {
            if(curr[i] < curr[n-take]) {
                added += curr[n-take] - curr[i];
                curr[i] = curr[n-take];
            }
        }
        
        sum = 0;
        for(int i = n-take; i < n; i++) {
            sum += curr[i];
        }
        
        if(sum == k) {
            ans = min(ans, added);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}