/*
 * @lc app=leetcode id=1750337870 lang=cpp
 *
 * PowxN
 * 
 * Difficulty: Medium
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    double solve(double x, long n) {
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            return solve(1 / x, -n);
        }
        if (n % 2 == 0) {
            return solve(x * x, n / 2);
        } else {
            return x * solve(x * x, (n - 1) / 2);
        }
    }

    double myPow(double x, int n) {
        // Convert to long to handle INT_MIN properly
        long long_n = static_cast<long>(n);
        return solve(x, long_n);
    }
};
