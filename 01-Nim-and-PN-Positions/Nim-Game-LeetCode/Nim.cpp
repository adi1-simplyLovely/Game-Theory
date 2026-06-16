#include <bits/stdc++.h>
using namespace std;

bool nim(int n) {
    if(!(n % 4)) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        nim(n) ? cout << "First" << endl : cout << "Second" << endl;
    }
    return 0;
}