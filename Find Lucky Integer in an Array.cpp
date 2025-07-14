class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int nums:arr){
            freq[nums]++;
        }
        
        int maxLucky=-1;
        for(auto& pair:freq){
            if(pair.first==pair.second)  maxLucky=max(maxLucky,pair.first);
        }
        return maxLucky;
    }
};