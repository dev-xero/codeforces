#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s;

        for (int i = 0; i < n-2; i++) {
            int x; cin >> x;
            s += to_string(x);
        }

        if (s.contains("101")) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}