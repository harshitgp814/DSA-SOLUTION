class Solution {
public:
    vector<vector<int>> result;
    void solve(int i, vector<int>& nums, vector<int>& temp) {
        if (i == nums.size()) {
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);  // include nums[i]
        solve(i + 1, nums, temp); // recursion faith
        temp.pop_back();          // exclude backtracking condition
        solve(i + 1, nums, temp); // recursion faith
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;

        solve(0, nums, temp);
        return result;
    }
};
