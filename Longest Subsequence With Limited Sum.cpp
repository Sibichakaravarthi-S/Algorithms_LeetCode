class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        int n=nums.size();
        int m=queries.size();
        vector<int> answer(m);
        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }

        int count,low,high,mid;
        for(int i=0;i<m;i++){
            count=0;
            low=0,high=n-1;
            while(low<=high){
                    mid=low+(high-low)/2;
                    if(nums[mid]>queries[i]) high=mid-1;
                    else{
                        count=mid+1;
                        low=mid+1;
                    }
                    
            }
            answer[i]=count;
        }
        return answer;
    }
};