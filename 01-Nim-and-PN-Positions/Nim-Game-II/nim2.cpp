#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int xorSum = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int mod = x % 4;
            xorSum ^= mod;
        }

        xorSum != 0 ? cout << "first" << endl : cout << "second" << endl;
    }

    return 0;
}