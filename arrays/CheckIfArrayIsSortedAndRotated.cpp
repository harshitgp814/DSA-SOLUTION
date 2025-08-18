/*
 * @lc app=leetcode id=1739504892 lang=cpp
 *
 * CheckIfArrayIsSortedAndRotated
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    bool check(vector<int>& nums) {
        //1752 easy te toh array sorted an rotated  modulus ka game tha total and > yeh condition m ek bhe cross aaj
        int n = nums.size();// sorted wala bhe toh rotated hee hoga {1,1,1}
        // count >1 s uppr toh rotated nhi hoga chamka gehra chamka
        int count=0;

        for(int i=0;i<n;i++){
            if(nums[i] > nums[(i+1) % n ]){
                count++;
            }
        }
        return (count<=1);
    }
};