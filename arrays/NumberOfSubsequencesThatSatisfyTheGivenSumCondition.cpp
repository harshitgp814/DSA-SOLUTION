/*
 * @lc app=leetcode id=1739271268 lang=cpp
 *
 * NumberOfSubsequencesThatSatisfyTheGivenSumCondition
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:

    int numSubseq(vector<int>& nums, int target) {
        
const int mod=1e9+7; // precompute hee mushkil tha mera code hee dhek 
        if (!is_sorted(nums.begin(), nums.end()))
            sort(nums.begin(), nums.end());

        int n=nums.size();       
        vector<int> pow2mod(n+1, 1);
        for (int exp=1; exp<=n; exp++)
            pow2mod[exp]=(pow2mod[exp-1]<<1)%mod;
        
        int l=0, r=n-1;
        int ans=0;
        while(l<=r){
            if( nums[l]+nums[r]<=target){
                ans=(ans+pow2mod[r-l])%mod;
                l++;
            }
            else r--;
        }
        return ans;
    
        // // leetcode 1498 medium
        // int n=nums.size();
        // sort(nums.begin(),nums.end());//nlogn
        // vector<int>pow;
        // pow[0]=1;
        // for(int i=1;i<n;i++){
        //     pow[i]=(pow[i-1]*2)%M;  // power bound baabu bhayia
        // }
        // int res=0;
        // int L=0;
        // int R=n-1;
        // while(L<=R){
        //     if(nums[L]+nums[R]<=target){
        //         int diff=(R-L);
        //        res=(res % M + pow[diff])%M;
               
        //         L++;
        //     }
        //     else{
        //         R--;
        // //     }
        // }
        // return res;


       
       

    
    }
};