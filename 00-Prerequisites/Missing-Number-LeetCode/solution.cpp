#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // TODO: Write your XOR logic here to find the mex!
        int xorSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            xorSum ^= i ^ nums[i];
        }
        return xorSum ^ nums.size();
    }
};

// You can add a main function here to test it locally if you want
int main() {
    Solution sol;
    vector<int> test = {3, 0, 1};
    cout << "Missing number (mex) is: " << sol.missingNumber(test) << endl;
    return 0;
}
