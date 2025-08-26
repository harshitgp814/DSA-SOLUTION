/*
 * @lc app=leetcode id=1749150635 lang=cpp
 *
 * FibonacciNumber
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        return( fib(n-1)+fib(n-2));
        
    }
};