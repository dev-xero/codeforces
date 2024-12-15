#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int row1 = min(a, m);
        int row2 = min(b, m);
        int left = 2 * m - row1 - row2;
        int no_pref = min(c, left);

        cout << row1 + row2 + no_pref << '\n';
    }

    return 0;
}