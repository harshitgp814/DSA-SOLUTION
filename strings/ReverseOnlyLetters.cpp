/*
 * @lc app=leetcode id=1744465510 lang=cpp
 *
 * ReverseOnlyLetters
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    string reverseOnlyLetters(string s) {
        //917 easy Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"
  int i =0;
  int j=s.size()-1;
  while(i<=j){
    if(isalpha(s[i]) && isalpha(s[j])){
    // { if(ch>=65&& ch<=90 || 97 and 122)
        swap(s[i],s[j]);
        i++,j--;
    }
    else {
    if (!isalpha(s[i])){
        i++;

    }
    if (!isalpha(s[j])){
        j--;

    }
  }
  }
    
    return s;
  }
    };
        
    
