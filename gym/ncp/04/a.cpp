#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cnt(n);

    for (int i = 0; i < n; i++) {
        int color;
        cin >> color;
        cnt[color - 1]++;
    }

    int single = 0;
    int multi = 0;

    for (int x : cnt) {
        if (x == 1)
            single++;
        else if (x > 1)
            multi++;
    }

    cout << multi + (single + 1) / 2 * 2 << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}