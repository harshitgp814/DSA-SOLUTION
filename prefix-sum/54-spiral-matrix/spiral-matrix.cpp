class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};  
        int m= matrix.size();  // rows len
        int n=matrix[0].size();
         // col len
        
                                              // dir=0-> left to right
                                            //  dir=1-> top to down
                                            //   dir=2->  right  to left
                                            //    dir=3->down to top
            int dir=0;
            int left=0;
            int right=n-1;
            int top=0;
            int down=m-1;

            vector<int>result;
            while(result.size()<(m*n)){
                if(dir==0){
                    for(int i=left ; i<=right;i++){
                        result.push_back(matrix[top][i]); // top row const hh
                    }
                    top++;
                }
                if(dir==1){
                    for(int j=top ;j<=down;j++){
                        result.push_back(matrix[j][right]); // riggth col consth
                    }
                    right--;
                }
                if(dir==2){
                    for(int i=right ; i>=left;i--){
                        result.push_back(matrix[down][i]);// down const h
                    }
                    down--;
                }
                if(dir==3){
                    for(int j=down ; j>=top;j--){
                        result.push_back(matrix[j][left]); // left const h
                    }
                    left++;
                }
                dir++;
                if(dir==4){
                    dir=0;
                }


            }
            return result;









    }
};