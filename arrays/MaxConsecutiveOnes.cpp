/*
 * @lc app=leetcode id=1742011275 lang=cpp
 *
 * MaxConsecutiveOnes
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // 485 easy // Input: nums = [1,1,0,1,1,1]
// Output: 3 // 1 k sath khelo 
int n=nums.size();
int currcount=0;
int maxcount=0;

     for(int i=0;i<n;i++){
        if(nums[i]==1){
           currcount++;
           maxcount=max(currcount,maxcount);
        }
        else{
            currcount=0;
        }
     }
     return maxcount;

        
    }
};