/*
 * @lc app=leetcode id=1746699697 lang=cpp
 *
 * GrumpyBookstoreOwner
 * 
 * Difficulty: Level
 * Category: undefined
 * Runtime: N/A
 * Memory: N/A
 */

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        
        int k=minutes;
        //1052 sli window med Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3 Output: 16 //vector<int>&arr=customer to ccha naam of customers [i]
        int maxloss=0;
        int prevloss=0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1){
                prevloss+=customers[i];//0
            }
        }
         maxloss=prevloss;
        int maxindx=0;
        int i=1;
        int j=k;
        while(j<n){
            int currloss=prevloss;
            if(grumpy[j]==1) currloss+=customers[j];
            if(grumpy[i-1]==1) currloss-=customers[i-1];
            if(maxloss<currloss){
                maxloss=currloss;
                maxindx=i;
            }
            prevloss=currloss;
            i++;
            j++;

        }
        for(int i=maxindx;i<(maxindx+k);i++){
            grumpy[i]=0; // fitting 0 in grumpy array 
        }
 // sum of satis faction 
 int sum=0;
 for(int i=0;i<n;i++){
    if(grumpy[i]==0) {
        sum +=customers[i];
 }
 }
 return sum;





        
    }
};