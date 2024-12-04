// https://codeforces.com/gym/570592/problem/0
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        LL x, m;
        cin >> x >> m;

        LL res = 0;

        for (int y = 1; y <= min(2LL * x, m); y++)
        {
            LL _xor = x ^ y;
            if (x != y and ((x % _xor) == 0 or (y % _xor == 0)))
            {
                ++res;
            }
        }
        cout << res << "\n";
    }

    return 0;
}