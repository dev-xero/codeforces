#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isSolution(const string &s, int i) {
    if (i + 3 < s.size()) {
        return s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' &&
               s[i + 3] == '0';
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    ll tests;
    cin >> tests;

    while (tests--) {
        string base;
        ll queries;

        cin >> base >> queries;

        while (queries--) {
            ll idx;
            int val;
            
            cin >> idx >> val;
            
            idx--;
            base[idx] = val + '0';
            bool found = false;

            for (int i = 0; i + 3 < base.size(); i++) {
                if (isSolution(base, i)) {
                    found = true;
                    break;
                }
            }

            cout << (found ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}