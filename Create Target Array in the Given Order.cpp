class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;

        for(int i=0;i<nums.size();i++){
            result.push_back(0);

            for(int j=result.size()-1;j>index[i];j--){
                result[j]=result[j-1];
            }
            result[index[i]]=nums[i];
        }
        return result;
    }
};