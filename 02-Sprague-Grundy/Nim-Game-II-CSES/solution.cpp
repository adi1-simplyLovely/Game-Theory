/*
 * Problem:  Nim Game II (CSES)
 * Concept:  Sprague-Grundy Theorem
 * 
 * You can remove 1, 2, or 3 sticks. 
 * The Grundy number (mex) for a pile of n sticks is G(n) = n % 4.
 * By Sprague-Grundy theorem, the combined game state is the XOR-sum of the Grundy numbers of all piles.
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

    while(t--) {
        int n;
        cin >> n;

        int xorSum = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            
            // Sprague-Grundy: G(x) for this specific subgame is x % 4
            int mod = x % 4;
            xorSum ^= mod;
        }

        xorSum != 0 ? cout << "first" << endl : cout << "second" << endl;
    }

    return 0;
}
