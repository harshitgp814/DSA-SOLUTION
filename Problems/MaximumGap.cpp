/*
 * @lc app=leetcode id=1738493199 lang=cpp
 *
 * MaximumGap
 * 
 * Difficulty: Easy
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(), nums.end());
        int i=1;
        
        int maxgap=0;
        if(n<2){
            return 0;
        }
while(i<n){
     int gap=(nums[i]-nums[i-1]);
     if(gap>maxgap){
        maxgap=gap;
     }
     i++;
    }

return maxgap;
        
    }
};