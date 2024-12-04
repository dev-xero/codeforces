#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int tests = 0;
    cin >> tests;

    while (tests--) {
        int notes = 0;
        cin >> notes;

        vector<int> notes_vec(notes);
        for (int i = 0; i < notes; i++) {
            cin >> notes_vec[i];
        }

        bool isPerfect = true;

        for (int i = 1; i < notes_vec.size(); i++) {
            int diff = abs(notes_vec[i]- notes_vec[i-1]);
            if (diff != 5 && diff != 7) {
                isPerfect = false;
                break;
            }
        }

        cout << (isPerfect ? "YES" : "NO") << '\n';
    }

    return 0;
}