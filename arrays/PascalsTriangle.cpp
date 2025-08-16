/*
 * @lc app=leetcode id=1737265237 lang=cpp
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
        vector<vector<int>> res;

        int m = numRows;
        for(int i=1;i<=m;i++){
            vector<int>v(i);
            res.push_back(v);//{{},{  },{   }}

        }
        // for filling triangle

        for(int i=0;i<m;i++){
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    res[i][j]=1;
                }
                 else{
                        res[i][j]=(res[i-1][j]+res[i-1][j-1]);
                   }
            }
        }
        return res;
        
    }
};