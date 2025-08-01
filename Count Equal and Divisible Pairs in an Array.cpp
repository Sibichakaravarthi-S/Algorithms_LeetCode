class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;

        unordered_map<int,vector<int>> temp;

        for(int i=0;i<nums.size();i++){
            temp[nums[i]].push_back(i);
        }

        for(auto& [value,index]:temp){
            for(int i=0;i<index.size();i++){
                for(int j=i+1;j<index.size();j++){
                    if((index[i]*index[j])%k==0)   count++;
                }
            }
        }
        return count;
    }
};