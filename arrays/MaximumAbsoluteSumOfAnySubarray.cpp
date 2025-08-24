/*
 * @lc app=leetcode id=1746713832 lang=cpp
 *
 * MaximumAbsoluteSumOfAnySubarray
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //kadane algoorithm
        //{1,-3,2,3,-4}
        int n=nums.size();
        int currsum=nums[0];
        int maxsubsum=nums[0];//5
        //kadane algo to find max subarray sum
        for(int i=1;i<n;i++){
            currsum=max(nums[i],currsum+nums[i]);
            maxsubsum=max(maxsubsum,currsum);
        }
        currsum=nums[0];
       int minsubsum=nums[0];
        //kadane algo to find min subarray sum
        for(int i=1;i<n;i++){
            currsum=min(nums[i],currsum+nums[i]);
            minsubsum=min(minsubsum,currsum);
        }
        return max(maxsubsum,abs(minsubsum));
        //o(2n)>o(n)
        
    }
};