/*
 * @lc app=leetcode id=1741998079 lang=cpp
 *
 * MissingNumber
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //268 easy 
        // Input: nums = [3,0,1]//only number in the range 
        // n natural no ka sum - sum of every elements i nums
        
        //   Output: 2
        int n =nums.size();
        int naturalsum = (n*(n+1))/2;
       

        
        int numssum=0;
        for( int j=0;j<n;j++){
            numssum+=nums[j];

        }
        int final = (naturalsum-numssum);
        return final;
        

        
    }
};