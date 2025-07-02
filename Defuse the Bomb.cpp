class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        for(int i=0;i<code.size();i++){
            if(k>0){
                int m=1;
                int sum=0;
                while(m<=k){
                sum+=code[(i+m)%code.size()];
                m++;
                }
                ans.push_back(sum);
            }
            else if (k<0){
                int m=1;
                int sum=0;
                while(m<=-k){
                sum+=code[(code.size()+(i-m))%code.size()];
                m++;
                }
                ans.push_back(sum);
            }
            else{
                ans.push_back(0);
            }

        }
        return ans;
    }
};