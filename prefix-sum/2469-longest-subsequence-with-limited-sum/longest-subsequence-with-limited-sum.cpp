class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m= queries.size();
        vector<int> answer(m);

        //sort num
        sort(nums.begin(),nums.end());
        
        for( int i=1;i<n;i++){
            nums[i]+=nums[i-1];  // make nums prefix
        }

        for(int i=0;i<m;i++){
            int cnt=0;

        for(int j=0;j<n;j++){                
            if(nums[j]>queries[i]){
               
                break;
            }
             cnt++;
          
        }
         answer[i]=cnt;

        }
        return answer;
       
        
        
    }
        // answer[i]=0;
        // for(int j=0;j<n;j++){
        //     if(nums[j]>=queries[i]){
        //         answer[i]=(j+1);
        //         break;
        //     }
};