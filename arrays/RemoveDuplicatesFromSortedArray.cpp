/*
 * @lc app=leetcode id=1738614214 lang=cpp
 *
 * RemoveDuplicatesFromSortedArray
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       

        if (nums.empty()) return 0;

        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;  // Number of unique elements
    }
};



  