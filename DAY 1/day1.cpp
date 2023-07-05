#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n / 2];
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution solution;
    int ans = solution.majorityElement(nums);
    cout << ans;
    return 0;
}
