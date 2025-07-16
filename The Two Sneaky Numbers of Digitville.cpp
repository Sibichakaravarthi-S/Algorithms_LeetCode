class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> sample;
        vector<int> result;
        for(auto& num:nums){
            sample[num]++;
            if(sample[num]==2)  result.push_back(num);
        }
        return result;
    }
};