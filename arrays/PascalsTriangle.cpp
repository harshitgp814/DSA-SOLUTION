/*
 * @lc app=leetcode id=1737271569 lang=cpp
 *
 * PascalsTriangle
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
 vector<vector<int>> a(n);
      for(int i=0;i<n;i++){
            a[i].resize(i + 1); 
        for(int j=0;j<i+1;j++){
            if(j==0||j==i){
                a[i][j]=1;
            }else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
      } 
      return a; 
        
    }
};