#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
    LL n;
    int k;

    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }

    cout << n << '\n';

    return 0;
}