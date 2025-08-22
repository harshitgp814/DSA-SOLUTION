/*
 * @lc app=leetcode id=1744414267 lang=cpp
 *
 * ValidAnagram
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        //242 easy jos meh chize h whi t meh honi chyie 
        //brute sorting // counting 
        int freqtable[256]={0};// yeh 256 array m 0 bhrdega
        for(int i=0;i<s.size();i++){
            freqtable[s[i]]++; // ye line a ko as int lefi unary operator
            // a=2 n=1 g=1 r=1 m=1 = frqtable
        }
        for(int i=0;i<t.size();i++){
            freqtable[t[i]]--; //frq table fir 0 hoga
        }
        for(int i=0;i<256;i++){
            if(freqtable[i]!=0){
                return false;
            }
        }
        return true;
    }
};