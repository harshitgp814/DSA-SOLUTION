/*
 * @lc app=leetcode id=1741588484 lang=cpp
 *
 * MoveZeroes
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =nums.size();// tempvanish hee hoga  vamp ya other swap and reaarange nhi krega toh element  vanish hee hoga
        
        int j=0;
        for(int i=0;i<n;i++){
            
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
      



        
    }
};