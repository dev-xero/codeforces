#include <bits/stdc++.h>

using namespace std;

int max_ops(int l, int r, int k) {
    int count = 0;
    for (int x = 1; x <= r; ++x) {
        int multiples = (r / x) - ((l - 1) / x);

        if (multiples >= k) {
            count++;
        }

        if (x > r) break;
    }

    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests--) {
        int l, r, k;
        cin >> l >> r >> k;

        cout << max_ops(l, r, k) << '\n';
    }

    return 0;
}