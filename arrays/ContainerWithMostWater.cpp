/*
 * @lc app=leetcode id=1746705430 lang=cpp
 *
 * ContainerWithMostWater
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int maxArea(vector<int>& height) {
         int n = height.size();
        int i=0,j=(n-1);
        int area;
        int maxwater=0;
        while(i<j){//width kam hori toh height maximu karo

        int x = min(height[i],height[j]);
            int y = (j-i);
            area=x*y;
            maxwater=max(maxwater,area);

            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        
            return maxwater;
        
    }
};