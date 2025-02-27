#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vll;

ll solve(ll n, vector<ll>& wealth) {
    if (n == 1) return -1;
    
    ll total = accumulate(wealth.begin(), wealth.end(), 0LL);
    sort(wealth.begin(), wealth.end());
    
    ll low = 0, high = 1e12, result = -1;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll new_sum = total + mid;
        ll new_median = (new_sum + n - 1) / n;

        
        ll count = wealth.end() - lower_bound(wealth.begin(), wealth.end(), new_median);
        
        if (count > n / 2) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> wealth(n);
        for (ll i = 0; i < n; i++) {
            cin >> wealth[i];
        }
        cout << solve(n, wealth) << '\n';
    }
    return 0;
}