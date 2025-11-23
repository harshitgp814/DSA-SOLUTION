class Solution {
public:
    // space optimization meh dp array htade bs prev =0,next=1
    int fib(int n) {
        if (n <= 1)
            return n;
        int prev = 0;
        int next = 1;
        for (int i = 2; i <= n; i++) {
            int curr = next + prev;
            prev = next;
            next = curr;
        }
        return next;
    }
};

//   // bottom up
//  if(n<=1) return n;
//     //create dp 1st
//     vector<int>dp(n+1,-1);
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];

// //    //rec+ memo first method top down
//    int solvememo(int n,vector<int>&dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=solvememo(n-2,dp)+solvememo(n-1,dp);

//    }

//     int fib(int n) {
//         vector<int>dp(n+1,-1);
//         return solvememo(n,dp);

//     }
// };
