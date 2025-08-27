/*
 * @lc app=leetcode id=1750508374 lang=cpp
 *
 * CountGoodNumbers
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    const int M = 1e9 + 7;

    // Modular exponentiation (recursive)
    long long findpower(long long a, long long b) {
        if (b == 0) return 1;
        long long half = findpower(a, b / 2);
        long long result = (half * half) % M;
        if (b % 2 != 0) {
            result = (result * a) % M;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long even_positions = (n + 1) / 2; // even indices: 0, 2, 4...
        long long odd_positions = n / 2;        // odd indices: 1, 3, 5...

        long long pow5 = findpower(5, even_positions);
        long long pow4 = findpower(4, odd_positions);

        return (pow5 * pow4) % M;
    }
};
