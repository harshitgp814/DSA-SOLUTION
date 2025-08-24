/*
 * @lc app=leetcode id=1746707826 lang=cpp
 *
 * BestTimeToBuyAndSellStock
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprice=0;
        int buyprice=prices[0];
        for(int i=1;i<n;i++){
            int currprice=(prices[i]-buyprice);
            if(prices[i]<buyprice){
                buyprice=prices[i];
            }
            if(currprice>maxprice){
                maxprice=currprice;
            }
    }
    return maxprice;
        
    }
};