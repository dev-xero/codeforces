#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n = 0;

    cin >> n;

    ll num = 0, sum = 0;
    ll expected_sum = 0.5 * n * (n + 1);

    // Read all input and sum
    for (ll idx = 0; idx < n - 1; idx++) {
        cin >> num;
        sum += num;
    }

    // Diff between expected and sum is the missing number
    cout << expected_sum - sum << '\n';

    return 0;
}