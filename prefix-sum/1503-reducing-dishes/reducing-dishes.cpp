class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n= satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
       vector<int> suffix(n);
        suffix[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1] + satisfaction[i];

        }
        //finding pivot idx
        int idx = -1;
        for(int i=0;i<n;i++){
            if(suffix[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            return 0;
        }
        // max-sum of life time coeff
        int x=1;
        int maxSum=0;
        for(int i=idx;i<n;i++){
            maxSum+=(satisfaction[i]*x);
            x++;
        }
        return maxSum;
    }
};