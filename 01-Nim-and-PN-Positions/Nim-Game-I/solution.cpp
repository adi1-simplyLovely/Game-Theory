/*
 * Problem:  Nim Game I (CSES)
 * Concept:  Bouton's Theorem — XOR-sum of all pile sizes
 * 
 * If XOR = 0 → P-position → "second" wins
 * If XOR ≠ 0 → N-position → "first" wins
 *
 * Time:  O(n) per test case
 * Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int xorSum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            xorSum ^= x;  // XOR all pile sizes
        }

        // XOR ≠ 0 → first player has a winning strategy
        cout << (xorSum != 0 ? "first" : "second") << "\n";
    }

    return 0;
}
