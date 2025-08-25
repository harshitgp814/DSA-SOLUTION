/*
 * @lc app=leetcode id=1747405232 lang=cpp
 *
 * MinimumSizeSubarraySum
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
//         Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2 209 med
int n=nums.size();
int i=0,j=0;
int minlen=INT_MAX;
int sum=0;
while(j<n){
    sum+=nums[j]; // window ko chota karna heee pdega min wind k liye
    while(sum>=target){
        minlen=min(minlen,j-i+1);
        sum-=nums[i];
        i++;
    }
    j++;
}
if ( minlen==INT_MAX) return  0;
return minlen;


        
    }
};