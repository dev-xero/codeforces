// https://codeforces.com/problemset/problem/4/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w = 0; cin >> w;
    
    cout << ((w % 2 == 0 && w != 2) ? "YES" : "NO") << endl;

    return 0;
}