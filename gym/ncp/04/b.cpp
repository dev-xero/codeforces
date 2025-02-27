#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }

        int totalLength = 0;
        int maxWords = 0;

        for (int i = 0; i < n; i++) {
            if (totalLength + words[i].length() <= m) {
                totalLength += words[i].length();
                maxWords++;
            } else {
                break;
            }
        }

        cout << maxWords << "\n";
    }
    return 0;
}