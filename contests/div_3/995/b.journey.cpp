#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll suma = a + b + c;
        ll total = n / suma;
        ll dist = total * suma;
        ll days = total * 3;

        if (dist >= n) {
            cout << days << "\n";
            continue;
        }

        if (dist + a >= n) {
            cout << days + 1 << "\n";
        } else if (dist + a + b >= n) {
            cout << days + 2 << "\n";
        } else {
            cout << days + 3 << "\n";
        }
    }

    return 0;
}