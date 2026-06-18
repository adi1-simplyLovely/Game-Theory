#include <bits/stdc++.h>
using namespace std;

string gameOfStone(int n) {
    if((n % 7) == 0 || (n % 7) == 1) {
        return "Second";
    }
    return "First";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        cout << gameOfStone(n) << endl;
    }




    return 0;
}