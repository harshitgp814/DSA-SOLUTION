/*
 * @lc app=leetcode id=1739532217 lang=cpp
 *
 * RotateArray
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */


void reverseArray(vector<int>& arr, int start, int end){
   
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers
        start++;
        end--;
    }
}

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
//         Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]

// rev logic 1)full array rev 2) k elemenet rev 3) n-k eemnets rev


// 189 med
int n =nums.size();
k=k%n;

 // array rotate right place ka logic chamkna
reverseArray( nums,0,n-1);//pura array reb
reverseArray( nums,0,k-1);// first k rev
reverseArray(nums, k,n-1);// n-k rev












    }
};