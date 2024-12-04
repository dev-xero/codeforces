#include <bits/stdc++.h>
using namespace std;

bool solve(string s, string r)
{
    int n = s.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool found = false;

        for (int j = 0; j < s.size() - 1; j++)
        {
            if (s[j] != s[j + 1])
            {
                s.replace(j, 2, 1, r[i]);
                found = true;

                break;
            }
        }

        if (!found)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s, r;
        cin >> n >> s >> r;

        cout << (solve(s, r) ? "YES" : "NO") << "\n";
    }

    return 0;
}
