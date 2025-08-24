/*
 * @lc app=leetcode id=1746716371 lang=cpp
 *
 * PowerOfThree
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    bool isPowerOfThree(int n) {
           
         if (n < 1) return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
        
    }
};